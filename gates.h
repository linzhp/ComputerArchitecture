/****************
#  last updated:02/15/09
#
#  Aimen Al-Refai
#  header file
******************/

#ifndef GATES_H
#define GATES_H

/*the BWExtend function to make an n-bit value from the one-bit value in*/
void BWExtend1_1(char out[1], char in);
void BWExtend1_2(char out[2], char in);
.
.
.


/*not gates*/
char NOT1_1(char in1);
void NOT1_2(char output[2], char in1[2]);
.
.
.


/*and gates*/
char AND2_1(char in1, char in2);
void AND2_2(char output[2], char in1[2], char in2[2]);
.
.
.


char AND3_1(char in1, char in2, char in3);
void AND3_2(char output[2], char in1[2], char in2[2], char in3[2]);
.
.
.



/*or gates*/
char OR2_1(char in1, char in2);
void OR2_2(char output[2], char in1[2], char in2[2]);
.
.
.


char OR3_1(char in1, char in2, char in3);
void OR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
.
.
.



/*NAND gates*/
char NAND2_1(char in1, char in2);
void NAND2_2(char output[2], char in1[2], char in2[2]);
.
.
.


char NAND3_1(char in1, char in2, char in3);
void NAND3_2(char output[2], char in1[2], char in2[2], char in3[2]);
.
.
.




/*NOR gates*/
char NOR2_1(char in1, char in2);
void NOR2_2(char output[2], char in1[2], char in2[2]);
.
.
.

char NOR3_1(char in1, char in2, char in3);
void NOR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
.
.
.


/*XOR gates*/
char XOR2_1(char in1, char in2);
void XOR2_2(char output[2], char in1[2], char in2[2]);
.
.
.

char XOR3_1(char in1, char in2, char in3);
void XOR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
.
.
.



/*XNOR gates*/
char XNOR2_1(char in1, char in2);
void XNOR2_2(char output[2], char in1[2], char in2[2]);
.
.
.

char XNOR3_1(char in1, char in2, char in3);
void XNOR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
.
.
.

#endif
