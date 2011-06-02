#ifndef CONTROL_H_
#define CONTROL_H_

void ControlUnit(char opcode[6], char func[6],
		char *regWrite,
		char *jump,
		char *branch,
		char *memRead,
		char *memToReg,
		char ALUop[2],
		char *memWrite,
		char *ALUsrc,
		char *regDst
		);

#endif /* CONTROL_H_ */
