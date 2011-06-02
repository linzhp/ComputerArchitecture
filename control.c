#include "control.h"
#include "gates.h"
#include <stdio.h>

void ControlUnit(char opcode[6], char func[6],
		char *regWrite,
		char *jump,
		char *branch,
		char *memRead,
		char *memToReg,
		char operation[3],
		char *memWrite,
		char *ALUsrc,
		char *regDst
		){
	/* Resolving regWrite
	 *
	 * Only beq, j and sw don't need to write back to register
	 * Their opcode are 000100, 000010 and 101011
	 * */
	*regWrite = NOR3_1(AND6_1(NOT1_1(opcode[0]), NOT1_1(opcode[1]), NOT1_1(opcode[2]), opcode[3], NOT1_1(opcode[4]), NOT1_1(opcode[5])),
			AND6_1(NOT1_1(opcode[0]), NOT1_1(opcode[1]), NOT1_1(opcode[2]),NOT1_1(opcode[3]), opcode[4],  NOT1_1(opcode[5])),
			AND6_1(opcode[0], NOT1_1(opcode[1]), opcode[2],NOT1_1(opcode[3]), opcode[4],  opcode[5]));
	/*
	 * Resolving jump
	 *
	 * Only j sets jump to 1
	 */
	*jump = AND6_1(NOT1_1(opcode[0]), NOT1_1(opcode[1]), NOT1_1(opcode[2]),NOT1_1(opcode[3]), opcode[4],  NOT1_1(opcode[5]));
	/*
	 * Resolving branch
	 * Only beq sets branch to 1
	 */
	*branch = AND6_1(NOT1_1(opcode[0]), NOT1_1(opcode[1]), NOT1_1(opcode[2]), opcode[3], NOT1_1(opcode[4]), NOT1_1(opcode[5]));
	/*
	 * memRead, memToReg
	 * only lw needs to read from data memory, though memRead is "don't care" in other cases,
	 * it's not harmful to set it to 0 like memToReg.
	 * Its opcode is 100011
	 */
	*memToReg = *memRead = AND6_1(opcode[0], NOT1_1(opcode[1]), NOT1_1(opcode[2]), NOT1_1(opcode[3]), opcode[4], opcode[5]);
	/*
	 * Resolving operation[0]
	 * only slti, beq, sub and slt set it to 1
	 */
	operation[0] = OR3_1(AND4_1(opcode[2], NOT1_1(opcode[3]), opcode[4], NOT1_1(opcode[5])),
			AND4_1(NOT1_1(opcode[2]),opcode[3], NOT1_1(opcode[4]), NOT1_1(opcode[5])),
			AND2_1(NOR6_1(opcode[0],opcode[1], opcode[2], opcode[3], opcode[4], opcode[5]), func[4]));
	/*
	 * Resolving operation[1]
	 * only following instruction set it to 0:
	 * 		opcode	func
	 * add:	000000	100000
	 * or:	000000	100101
	 * addi:001000
	 * ori:	001101
	 * sw:	101011
	 * lw:	100011
	 */
	operation[1] = NOR4_1(AND2_1(NOR6_1(opcode[0],opcode[1], opcode[2], opcode[3], opcode[4], opcode[5]), OR2_1(NOR3_1(func[3], func[4], func[5]), AND3_1(func[3], NOT1_1(func[4]), func[5]))),
			NOR4_1(NOT1_1(opcode[2]), opcode[3], opcode[4], opcode[5]),
			AND3_1(opcode[3], NOT1_1(opcode[4]), opcode[5]),
			AND2_1(opcode[0], NOT1_1(opcode[1])));
	/*
	 * Resolving operation[2]
	 */
	operation[2] = OR4_1(
			AND2_1(NOR6_1(opcode[0],opcode[1], opcode[2], opcode[3], opcode[4], opcode[5]), OR2_1(AND4_1(func[2], NOT1_1(func[3]),func[4], NOT1_1(func[5])), AND4_1(NOT1_1(func[2]),func[3], NOT1_1(func[4]), func[5]))),
			AND3_1(NOT1_1(opcode[3]), opcode[4], NOT1_1(opcode[5])),
			AND3_1(opcode[3], NOT1_1(opcode[4]), opcode[5]),
			AND3_1(opcode[3], opcode[4], opcode[5]));
	/*
	 * Resolving memWrite
	 * only sw sets memWrite to 1
	 */
	*memWrite = AND3_1(opcode[0], NOT1_1(opcode[1]), opcode[2]);
	/*
	 * Resolving ALUsrc
	 * Only R-type and beq set it to 0
	 */
	*ALUsrc = OR4_1(opcode[0], opcode[1], opcode[2], opcode[4]);
	/*
	 * Resolving regDst
	 * Only R-type set it to 1
	 */
	*regDst = NOR6_1(opcode[0],opcode[1], opcode[2], opcode[3], opcode[4], opcode[5]);
}
