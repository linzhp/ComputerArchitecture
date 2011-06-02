#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ADDINST[3] = "add";
char ADDIINST[4] = "addi";
char ANDINST[3] = "and";
char ANDIINST[4] = "andi";
char ORINST[2] = "or";
char ORIINST[3] = "ori";
char SUBINST[3] = "sub";
char SUBIINST[4] = "subi";
char SLTINST[3] = "slt";
char SLTIINST[4] = "slti";
char BEQINST[3] = "beq";
char JINST[1] = "j";
char SWINST[2] = "sw";
char LWINST[2] = "lw";

char x0[4] = "0000";
char x1[4] = "0001";
char x2[4] = "0010";
char x3[4] = "0011";
char x4[4] = "0100";
char x5[4] = "0101";
char x6[4] = "0110";
char x7[4] = "0111";
char x8[4] = "1000";
char x9[4] = "1001";
char xa[4] = "1010";
char xb[4] = "1011";
char xc[4] = "1100";
char xd[4] = "1101";
char xe[4] = "1110";
char xf[4] = "1111";

static char *fivebitnumbers[] = {"00000", "00001", "00010", "00011",
	"00100", "00101", "00110", "00111", "01000", "01001", "01010",
	"01011", "01100", "01101", "01110", "01111", "10000", "10001",
	"10010", "10011", "10100", "10101", "10110", "10111", "11000",
	"11001", "11010", "11011", "11100", "11101", "11110", "11111"};

FILE *open_infile (char *filename) {
	FILE *file = fopen (filename, "r");
	if (file == NULL) {
		syseprintf (filename);
		set_exitcode (2);
	};
	return file;
}

FILE *open_outfile (char *filename) {
	FILE *file = fopen (filename, "w");
	if (file == NULL) {
		syseprintf (filename);
		set_exitcode (2);
	};
	return file;
}

int main(int argc, char **argv){
	char *in_filename;
	char *out_filename;
	char *in_line;
	char *out_line;
	char instruction_type = 'r'; //default to rtype.  You might change this.
	FILE *in;
	FILE *out;
	if(argc == 0){
		printf("Please specify a file to assemble...\n");
		return 1;
	}
	else{
		in_filename = argv[0][0];
		out_filename = argv[1][0];
	}
	in = open_infile(in_filename);
	out = open_outfile(out_filename);
	for(;;){
		fgets(in_line, 40, in); //40 here is arbitrary.
		if(in_line[0] == EOF) break;
		//instruction_type = type(in_line);
		/*switch (instruction_type){
			case 'r':
				rtype(out_line, in_line);
				break;
			case 'i':
				itype(out_line, in_line);
				break;
			case 'j':
				jtype(out_line, in_line);
				break;
			default:
				break;
		}*/
		fputs(out_line, out);
	}
	return 0;
}
/*
char type(char *instruction){
	char instruction_type;
	//This function will take a line from the input file
	//and identify what type of instruction.
	//Jtype is done for you.
	if(instruction[0] == 'j'){
		instruction_type = 'j';
	}
	return instruction_type;
}

void rtype(char *machinecode, char *instruction){
	//This function will set the machine code string
	//to the equivalent of the instruction string
	//for R-type instructions.  THus you already know
	//the opcode and should set shift amount = "00000"
}

void itype(char *machinecode, char *instruction){
	//Does an itype conversion.  You should
	//identify which instruction it is and assign
	//different opcodes
}

void jtype(char *machinecode, char*instruction){
	//Same for jtype.
}
*/
