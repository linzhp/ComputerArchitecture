/**********************
#  Zhongpeng Lin
#  method definitions
************************/

#include "gates.h"

/*the BWExtend function to make an n-bit value from the one-bit value in*/
void BWExtend1_1(char out[1], char in){
	if(in == '1'){
		out[0] ='1';
	}
	else{
		out[0] ='0';
	}
}
void BWExtend1_2(char out[2], char in){
	BWExtend1_1(&out[0], in);
	BWExtend1_1(&out[1], in);
}
.
.
.
.


/*not gate*/
char NOT1_1(char in1){
	if(in1 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NOT1_2(char output[2], char in1[2]){
	output[0] = NOT1_1(in1[0]);
	output[1] = NOT1_1(in1[1]);
}
.
.
.
.



/*and gates*/
char AND2_1(char in1, char in2){
	if (in1 == '1' && in2 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void AND2_2(char output[2], char in1[2], char in2[2]){
	output[0] = AND2_1(in1[0], in2[0]);
	output[1] = AND2_1(in1[1], in2[1]);
}
.
.
.




/*OR gates*/
char OR2_1(char in1, char in2){
	if (in1 == '1' || in2 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void OR2_2(char output[2], char in1[2], char in2[2]){
	output[0] = OR2_1(in1[0], in2[0]);
	output[1] = OR2_1(in1[1], in2[1]);
}
.
.
.


/*NAND gates*/
char NAND2_1(char in1, char in2){
	if (in1 == '1' && in2 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NAND2_2(char output[2], char in1[2], char in2[2]){
	output[0] = NAND2_1(in1[0], in2[0]);
	output[1] = NAND2_1(in1[1], in2[1]);
}
.
.
.
.


/*NOR gates*/

/*XOR gates*/

/*XNOR gates*/
