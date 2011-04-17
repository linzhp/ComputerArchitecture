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
void NOT1_8(char output[8], char in1[8]){
	NOT1_2(&output[0], &in1[0]);
	NOT1_2(&output[2], &in1[2]);
	NOT1_2(&output[4], &in1[4]);
	NOT1_2(&output[6], &in1[6]);
}
void NOT1_16(char output[16], char in1[16]){
	NOT1_8(&output[0], &in1[0]);
	NOT1_8(&output[8], &in1[8]);
}
void NOT1_32(char output[32], char in1[32]){
	NOT1_16(&output[0], &in1[0]);
	NOT1_16(&output[16], &in1[16]);
}

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
void AND2_8(char output[8], char in1[8], char in2[8]){
	AND2_2(&output[0], &in1[0], &in2[0]);
	AND2_2(&output[2], &in1[2], &in2[2]);
	AND2_2(&output[4], &in1[4], &in2[4]);
	AND2_2(&output[6], &in1[6], &in2[6]);
}
void AND2_16(char output[16], char in1[16], char in2[16]){
	AND2_8(&output[0], &in1[0], &in2[0]);
	AND2_8(&output[8], &in1[8], &in2[8]);
}
void AND2_32(char output[32], char in1[32], char in2[32]){
	AND2_16(&output[0], &in1[0], &in2[0]);
	AND2_16(&output[16], &in1[16], &in2[16]);
}
char AND3_1(char in1, char in2, char in3){
	if (in1 == '1' && in2 == '1' && in3 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void AND3_2(char output[2], char in1[2], char in2[2], char in3[2]){
	output[0] = AND3_1(in1[0], in2[0], in3[0]);
	output[1] = AND3_1(in1[1], in2[1], in3[1]);
}
void AND3_8(char output[8], char in1[8], char in2[8], char in3[8]){
	AND3_2(&output[0], &in1[0], &in2[0], &in3[0]);
	AND3_2(&output[2], &in1[2], &in2[2], &in3[2]);
	AND3_2(&output[4], &in1[4], &in2[4], &in3[4]);
	AND3_2(&output[6], &in1[6], &in2[6], &in3[6]);
}
void AND3_16(char output[16], char in1[16], char in2[16], char in3[16]){
	AND3_8(&output[0], &in1[0], &in2[0], &in3[0]);
	AND3_8(&output[8], &in1[8], &in2[8], &in3[8]);
}
void AND3_32(char output[32], char in1[32], char in2[32], char in3[32]){
	AND3_16(&output[0], &in1[0], &in2[0], &in3[0]);
	AND3_16(&output[16], &in1[16], &in2[16], &in3[16]);
}
char AND4_1(char in1, char in2, char in3, char in4){
	if (in1 == '1' && in2 == '1' && in3 == '1' && in4 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void AND4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]){
	output[0] = AND4_1(in1[0], in2[0], in3[0], in4[0]);
	output[1] = AND4_1(in1[1], in2[1], in3[1], in4[1]);
}
void AND4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]){
	AND4_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	AND4_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2]);
	AND4_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4]);
	AND4_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6]);
}
void AND4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]){
	AND4_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	AND4_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8]);
}
void AND4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]){
	AND4_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	AND4_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16]);
}
char AND6_1(char in1, char in2, char in3, char in4, char in5, char in6){
	if (in1 == '1' && in2 == '1' && in3 == '1' && in4 == '1' && in5 == '1' && in6 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void AND6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]){
	output[0] = AND6_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0]);
	output[1] = AND6_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1]);
}
void AND6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]){
	AND6_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	AND6_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2]);
	AND6_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4]);
	AND6_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6]);
}
void AND6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]){
	AND6_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	AND6_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8]);
}
void AND6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]){
	AND6_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	AND6_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16]);
}
char AND8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8){
	if (in1 == '1' && in2 == '1' && in3 == '1' && in4 == '1' && in5 == '1' && in6 == '1' && in7 =='1' && in8 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void AND8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]){
	output[0] = AND8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0]);
	output[1] = AND8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[0]);
}
void AND8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]){
	AND8_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	AND8_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2], &in7[0], &in8[0]);
	AND8_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4], &in7[0], &in8[0]);
	AND8_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6], &in7[0], &in8[0]);
}
void AND8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]){
	AND8_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	AND8_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8]);
}
void AND8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]){
	AND8_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	AND8_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16]);
}

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
void OR2_8(char output[8], char in1[8], char in2[8]){
	OR2_2(&output[0], &in1[0], &in2[0]);
	OR2_2(&output[2], &in1[2], &in2[2]);
	OR2_2(&output[4], &in1[4], &in2[4]);
	OR2_2(&output[6], &in1[6], &in2[6]);
}
void OR2_16(char output[16], char in1[16], char in2[16]){
	OR2_8(&output[0], &in1[0], &in2[0]);
	OR2_8(&output[8], &in1[8], &in2[8]);
}
void OR2_32(char output[32], char in1[32], char in2[32]){
	OR2_16(&output[0], &in1[0], &in2[0]);
	OR2_16(&output[16], &in1[16], &in2[16]);
}
char OR3_1(char in1, char in2, char in3){
	if (in1 == '1' || in2 == '1' || in3 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void OR3_2(char output[2], char in1[2], char in2[2], char in3[2]){
	output[0] = OR3_1(in1[0], in2[0], in3[0]);
	output[1] = OR3_1(in1[1], in2[1], in3[1]);
}
void OR3_8(char output[8], char in1[8], char in2[8], char in3[8]){
	OR3_2(&output[0], &in1[0], &in2[0], &in3[0]);
	OR3_2(&output[2], &in1[2], &in2[2], &in3[2]);
	OR3_2(&output[4], &in1[4], &in2[4], &in3[4]);
	OR3_2(&output[6], &in1[6], &in2[6], &in3[6]);
}
void OR3_16(char output[16], char in1[16], char in2[16], char in3[16]){
	OR3_8(&output[0], &in1[0], &in2[0], &in3[0]);
	OR3_8(&output[8], &in1[8], &in2[8], &in3[8]);
}
void OR3_32(char output[32], char in1[32], char in2[32], char in3[32]){
	OR3_16(&output[0], &in1[0], &in2[0], &in3[0]);
	OR3_16(&output[16], &in1[16], &in2[16], &in3[16]);
}
char OR4_1(char in1, char in2, char in3, char in4){
	if (in1 == '1' || in2 == '1' || in3 == '1' || in4 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void OR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]){
	output[0] = OR4_1(in1[0], in2[0], in3[0], in4[0]);
	output[1] = OR4_1(in1[1], in2[1], in3[1], in4[1]);
}
void OR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]){
	OR4_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	OR4_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2]);
	OR4_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4]);
	OR4_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6]);
}
void OR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]){
	OR4_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	OR4_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8]);
}
void OR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]){
	OR4_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	OR4_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16]);
}
char OR6_1(char in1, char in2, char in3, char in4, char in5, char in6){
	if (in1 == '1' || in2 == '1' || in3 == '1' || in4 == '1' || in5 == '1' || in6 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void OR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]){
	output[0] = OR6_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0]);
	output[1] = OR6_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1]);
}
void OR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]){
	OR6_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	OR6_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2]);
	OR6_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4]);
	OR6_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6]);
}
void OR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]){
	OR6_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	OR6_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8]);
}
void OR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]){
	OR6_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	OR6_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16]);
}
char OR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8){
	if (in1 == '1' || in2 == '1' || in3 == '1' || in4 == '1' || in5 == '1' || in6 == '1' || in7 =='1' || in8 == '1'){
		return '1';
	}
	else{
		return '0';
	}
}
void OR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]){
	output[0] = OR8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0]);
	output[1] = OR8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[0]);
}
void OR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]){
	OR8_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	OR8_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2], &in7[0], &in8[0]);
	OR8_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4], &in7[0], &in8[0]);
	OR8_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6], &in7[0], &in8[0]);
}
void OR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]){
	OR8_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	OR8_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8]);
}
void OR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]){
	OR8_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	OR8_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16]);
}

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
void NAND2_8(char output[8], char in1[8], char in2[8]){
	NAND2_2(&output[0], &in1[0], &in2[0]);
	NAND2_2(&output[2], &in1[2], &in2[2]);
	NAND2_2(&output[4], &in1[4], &in2[4]);
	NAND2_2(&output[6], &in1[6], &in2[6]);
}
void NAND2_16(char output[16], char in1[16], char in2[16]){
	NAND2_8(&output[0], &in1[0], &in2[0]);
	NAND2_8(&output[8], &in1[8], &in2[8]);
}
void NAND2_32(char output[32], char in1[32], char in2[32]){
	NAND2_16(&output[0], &in1[0], &in2[0]);
	NAND2_16(&output[16], &in1[16], &in2[16]);
}
char NAND3_1(char in1, char in2, char in3){
	if (in1 == '1' && in2 == '1' && in3 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NAND3_2(char output[2], char in1[2], char in2[2], char in3[2]){
	output[0] = NAND3_1(in1[0], in2[0], in3[0]);
	output[1] = NAND3_1(in1[1], in2[1], in3[1]);
}
void NAND3_8(char output[8], char in1[8], char in2[8], char in3[8]){
	NAND3_2(&output[0], &in1[0], &in2[0], &in3[0]);
	NAND3_2(&output[2], &in1[2], &in2[2], &in3[2]);
	NAND3_2(&output[4], &in1[4], &in2[4], &in3[4]);
	NAND3_2(&output[6], &in1[6], &in2[6], &in3[6]);
}
void NAND3_16(char output[16], char in1[16], char in2[16], char in3[16]){
	NAND3_8(&output[0], &in1[0], &in2[0], &in3[0]);
	NAND3_8(&output[8], &in1[8], &in2[8], &in3[8]);
}
void NAND3_32(char output[32], char in1[32], char in2[32], char in3[32]){
	NAND3_16(&output[0], &in1[0], &in2[0], &in3[0]);
	NAND3_16(&output[16], &in1[16], &in2[16], &in3[16]);
}
char NAND4_1(char in1, char in2, char in3, char in4){
	if (in1 == '1' && in2 == '1' && in3 == '1' && in4 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NAND4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]){
	output[0] = NAND4_1(in1[0], in2[0], in3[0], in4[0]);
	output[1] = NAND4_1(in1[1], in2[1], in3[1], in4[1]);
}
void NAND4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]){
	NAND4_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	NAND4_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2]);
	NAND4_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4]);
	NAND4_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6]);
}
void NAND4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]){
	NAND4_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	NAND4_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8]);
}
void NAND4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]){
	NAND4_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	NAND4_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16]);
}
char NAND6_1(char in1, char in2, char in3, char in4, char in5, char in6){
	if (in1 == '1' && in2 == '1' && in3 == '1' && in4 == '1' && in5 == '1' && in6 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NAND6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]){
	output[0] = NAND6_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0]);
	output[1] = NAND6_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1]);
}
void NAND6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]){
	NAND6_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	NAND6_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2]);
	NAND6_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4]);
	NAND6_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6]);
}
void NAND6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]){
	NAND6_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	NAND6_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8]);
}
void NAND6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]){
	NAND6_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	NAND6_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16]);
}
char NAND8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8){
	if (in1 == '1' && in2 == '1' && in3 == '1' && in4 == '1' && in5 == '1' && in6 == '1' && in7 =='1' && in8 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NAND8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]){
	output[0] = NAND8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0]);
	output[1] = NAND8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[0]);
}
void NAND8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]){
	NAND8_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	NAND8_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2], &in7[0], &in8[0]);
	NAND8_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4], &in7[0], &in8[0]);
	NAND8_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6], &in7[0], &in8[0]);
}
void NAND8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]){
	NAND8_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	NAND8_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8]);
}
void NAND8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]){
	NAND8_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	NAND8_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16]);
}


/*NOR gates*/
char NOR2_1(char in1, char in2){
	if (in1 == '1' || in2 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NOR2_2(char output[2], char in1[2], char in2[2]){
	output[0] = NOR2_1(in1[0], in2[0]);
	output[1] = NOR2_1(in1[1], in2[1]);
}
void NOR2_8(char output[8], char in1[8], char in2[8]){
	NOR2_2(&output[0], &in1[0], &in2[0]);
	NOR2_2(&output[2], &in1[2], &in2[2]);
	NOR2_2(&output[4], &in1[4], &in2[4]);
	NOR2_2(&output[6], &in1[6], &in2[6]);
}
void NOR2_16(char output[16], char in1[16], char in2[16]){
	NOR2_8(&output[0], &in1[0], &in2[0]);
	NOR2_8(&output[8], &in1[8], &in2[8]);
}
void NOR2_32(char output[32], char in1[32], char in2[32]){
	NOR2_16(&output[0], &in1[0], &in2[0]);
	NOR2_16(&output[16], &in1[16], &in2[16]);
}
char NOR3_1(char in1, char in2, char in3){
	if (in1 == '1' || in2 == '1' || in3 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NOR3_2(char output[2], char in1[2], char in2[2], char in3[2]){
	output[0] = NOR3_1(in1[0], in2[0], in3[0]);
	output[1] = NOR3_1(in1[1], in2[1], in3[1]);
}
void NOR3_8(char output[8], char in1[8], char in2[8], char in3[8]){
	NOR3_2(&output[0], &in1[0], &in2[0], &in3[0]);
	NOR3_2(&output[2], &in1[2], &in2[2], &in3[2]);
	NOR3_2(&output[4], &in1[4], &in2[4], &in3[4]);
	NOR3_2(&output[6], &in1[6], &in2[6], &in3[6]);
}
void NOR3_16(char output[16], char in1[16], char in2[16], char in3[16]){
	NOR3_8(&output[0], &in1[0], &in2[0], &in3[0]);
	NOR3_8(&output[8], &in1[8], &in2[8], &in3[8]);
}
void NOR3_32(char output[32], char in1[32], char in2[32], char in3[32]){
	NOR3_16(&output[0], &in1[0], &in2[0], &in3[0]);
	NOR3_16(&output[16], &in1[16], &in2[16], &in3[16]);
}
char NOR4_1(char in1, char in2, char in3, char in4){
	if (in1 == '1' || in2 == '1' || in3 == '1' || in4 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NOR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]){
	output[0] = NOR4_1(in1[0], in2[0], in3[0], in4[0]);
	output[1] = NOR4_1(in1[1], in2[1], in3[1], in4[1]);
}
void NOR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]){
	NOR4_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	NOR4_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2]);
	NOR4_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4]);
	NOR4_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6]);
}
void NOR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]){
	NOR4_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	NOR4_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8]);
}
void NOR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]){
	NOR4_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	NOR4_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16]);
}
char NOR6_1(char in1, char in2, char in3, char in4, char in5, char in6){
	if (in1 == '1' || in2 == '1' || in3 == '1' || in4 == '1' || in5 == '1' || in6 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NOR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]){
	output[0] = NOR6_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0]);
	output[1] = NOR6_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1]);
}
void NOR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]){
	NOR6_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	NOR6_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2]);
	NOR6_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4]);
	NOR6_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6]);
}
void NOR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]){
	NOR6_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	NOR6_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8]);
}
void NOR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]){
	NOR6_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	NOR6_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16]);
}
char NOR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8){
	if (in1 == '1' || in2 == '1' || in3 == '1' || in4 == '1' || in5 == '1' || in6 == '1' || in7 =='1' || in8 == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
void NOR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]){
	output[0] = NOR8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0]);
	output[1] = NOR8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[0]);
}
void NOR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]){
	NOR8_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	NOR8_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2], &in7[0], &in8[0]);
	NOR8_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4], &in7[0], &in8[0]);
	NOR8_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6], &in7[0], &in8[0]);
}
void NOR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]){
	NOR8_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	NOR8_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8]);
}
void NOR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]){
	NOR8_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	NOR8_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16]);
}

/*XOR gates*/
char XOR2_1(char in1, char in2){
	if((in1 == '1' && in2 == '0') || (in1 == '0' && in2 == '1'))
		return '1';
	else
		return '0';
}
void XOR2_2(char output[2], char in1[2], char in2[2]){
	output[0] = XOR2_1(in1[0], in2[0]);
	output[1] = XOR2_1(in1[1], in2[1]);
}
void XOR2_8(char output[8], char in1[8], char in2[8]){
	XOR2_2(&output[0], &in1[0], &in2[0]);
	XOR2_2(&output[2], &in1[2], &in2[2]);
	XOR2_2(&output[4], &in1[4], &in2[4]);
	XOR2_2(&output[6], &in1[6], &in2[6]);
}
void XOR2_16(char output[16], char in1[16], char in2[16]){
	XOR2_8(&output[0], &in1[0], &in2[0]);
	XOR2_8(&output[8], &in1[8], &in2[8]);
}
void XOR2_32(char output[32], char in1[32], char in2[32]){
	XOR2_16(&output[0], &in1[0], &in2[0]);
	XOR2_16(&output[16], &in1[16], &in2[16]);
}
char XOR3_1(char in1, char in2, char in3){
	if ((XOR2_1(in1, in2)=='0' && in3 == '1') || (XOR2_1(in1, in2)=='1' && in3 == '0')){
		return '1';
	}
	else{
		return '0';
	}
}
void XOR3_2(char output[2], char in1[2], char in2[2], char in3[2]){
	output[0] = XOR3_1(in1[0], in2[0], in3[0]);
	output[1] = XOR3_1(in1[1], in2[1], in3[1]);
}
void XOR3_8(char output[8], char in1[8], char in2[8], char in3[8]){
	XOR3_2(&output[0], &in1[0], &in2[0], &in3[0]);
	XOR3_2(&output[2], &in1[2], &in2[2], &in3[2]);
	XOR3_2(&output[4], &in1[4], &in2[4], &in3[4]);
	XOR3_2(&output[6], &in1[6], &in2[6], &in3[6]);
}
void XOR3_16(char output[16], char in1[16], char in2[16], char in3[16]){
	XOR3_8(&output[0], &in1[0], &in2[0], &in3[0]);
	XOR3_8(&output[8], &in1[8], &in2[8], &in3[8]);
}
void XOR3_32(char output[32], char in1[32], char in2[32], char in3[32]){
	XOR3_16(&output[0], &in1[0], &in2[0], &in3[0]);
	XOR3_16(&output[16], &in1[16], &in2[16], &in3[16]);
}
char XOR4_1(char in1, char in2, char in3, char in4){
	if ((XOR3_1(in1, in2, in3)=='0' && in4 == '1') || (XOR3_1(in1, in2, in3)=='1' && in4 == '0')){
		return '1';
	}
	else{
		return '0';
	}
}
void XOR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]){
	output[0] = XOR4_1(in1[0], in2[0], in3[0], in4[0]);
	output[1] = XOR4_1(in1[1], in2[1], in3[1], in4[1]);
}
void XOR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]){
	XOR4_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	XOR4_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2]);
	XOR4_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4]);
	XOR4_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6]);
}
void XOR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]){
	XOR4_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	XOR4_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8]);
}
void XOR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]){
	XOR4_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	XOR4_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16]);
}
char XOR6_1(char in1, char in2, char in3, char in4, char in5, char in6){
	if ((XOR3_1(in1, in2, in3)=='0' && XOR3_1(in4, in5, in6) == '1') || (XOR3_1(in1, in2, in3)=='1' && XOR3_1(in4, in5, in6) == '0')){
		return '1';
	}
	else{
		return '0';
	}
}
void XOR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]){
	output[0] = XOR6_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0]);
	output[1] = XOR6_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1]);
}
void XOR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]){
	XOR6_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	XOR6_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2]);
	XOR6_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4]);
	XOR6_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6]);
}
void XOR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]){
	XOR6_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	XOR6_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8]);
}
void XOR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]){
	XOR6_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	XOR6_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16]);
}
char XOR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8){
	if ((XOR4_1(in1, in2, in3, in4)=='0' && XOR4_1(in5, in6, in7, in8) == '1') || (XOR4_1(in1, in2, in3, in4)=='1' && XOR4_1(in5, in6, in7, in8) == '0')){
		return '1';
	}
	else{
		return '0';
	}
}
void XOR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]){
	output[0] = XOR8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0]);
	output[1] = XOR8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[0]);
}
void XOR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]){
	XOR8_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	XOR8_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2], &in7[0], &in8[0]);
	XOR8_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4], &in7[0], &in8[0]);
	XOR8_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6], &in7[0], &in8[0]);
}
void XOR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]){
	XOR8_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	XOR8_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8]);
}
void XOR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]){
	XOR8_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	XOR8_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16]);
}
/*XNOR gates*/
char XNOR2_1(char in1, char in2){
	if((in1 == '1' && in2 == '0') || (in1 == '0' && in2 == '1'))
		return '0';
	else
		return '1';
}
void XNOR2_2(char output[2], char in1[2], char in2[2]){
	output[0] = XNOR2_1(in1[0], in2[0]);
	output[1] = XNOR2_1(in1[1], in2[1]);
}
void XNOR2_8(char output[8], char in1[8], char in2[8]){
	XNOR2_2(&output[0], &in1[0], &in2[0]);
	XNOR2_2(&output[2], &in1[2], &in2[2]);
	XNOR2_2(&output[4], &in1[4], &in2[4]);
	XNOR2_2(&output[6], &in1[6], &in2[6]);
}
void XNOR2_16(char output[16], char in1[16], char in2[16]){
	XNOR2_8(&output[0], &in1[0], &in2[0]);
	XNOR2_8(&output[8], &in1[8], &in2[8]);
}
void XNOR2_32(char output[32], char in1[32], char in2[32]){
	XNOR2_16(&output[0], &in1[0], &in2[0]);
	XNOR2_16(&output[16], &in1[16], &in2[16]);
}
char XNOR3_1(char in1, char in2, char in3){
	if ((XNOR2_1(in1, in2)=='0' && in3 == '1') || (XNOR2_1(in1, in2)=='1' && in3 == '0')){
		return '0';
	}
	else{
		return '1';
	}
}
void XNOR3_2(char output[2], char in1[2], char in2[2], char in3[2]){
	output[0] = XNOR3_1(in1[0], in2[0], in3[0]);
	output[1] = XNOR3_1(in1[1], in2[1], in3[1]);
}
void XNOR3_8(char output[8], char in1[8], char in2[8], char in3[8]){
	XNOR3_2(&output[0], &in1[0], &in2[0], &in3[0]);
	XNOR3_2(&output[2], &in1[2], &in2[2], &in3[2]);
	XNOR3_2(&output[4], &in1[4], &in2[4], &in3[4]);
	XNOR3_2(&output[6], &in1[6], &in2[6], &in3[6]);
}
void XNOR3_16(char output[16], char in1[16], char in2[16], char in3[16]){
	XNOR3_8(&output[0], &in1[0], &in2[0], &in3[0]);
	XNOR3_8(&output[8], &in1[8], &in2[8], &in3[8]);
}
void XNOR3_32(char output[32], char in1[32], char in2[32], char in3[32]){
	XNOR3_16(&output[0], &in1[0], &in2[0], &in3[0]);
	XNOR3_16(&output[16], &in1[16], &in2[16], &in3[16]);
}
char XNOR4_1(char in1, char in2, char in3, char in4){
	if ((XNOR3_1(in1, in2, in3)=='0' && in4 == '1') || (XNOR3_1(in1, in2, in3)=='1' && in4 == '0')){
		return '0';
	}
	else{
		return '1';
	}
}
void XNOR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]){
	output[0] = XNOR4_1(in1[0], in2[0], in3[0], in4[0]);
	output[1] = XNOR4_1(in1[1], in2[1], in3[1], in4[1]);
}
void XNOR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]){
	XNOR4_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	XNOR4_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2]);
	XNOR4_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4]);
	XNOR4_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6]);
}
void XNOR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]){
	XNOR4_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	XNOR4_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8]);
}
void XNOR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]){
	XNOR4_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0]);
	XNOR4_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16]);
}
char XNOR6_1(char in1, char in2, char in3, char in4, char in5, char in6){
	if ((XNOR3_1(in1, in2, in3)=='0' && XNOR3_1(in4, in5, in6) == '1') || (XNOR3_1(in1, in2, in3)=='1' && XNOR3_1(in4, in5, in6) == '0')){
		return '0';
	}
	else{
		return '1';
	}
}
void XNOR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]){
	output[0] = XNOR6_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0]);
	output[1] = XNOR6_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1]);
}
void XNOR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]){
	XNOR6_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	XNOR6_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2]);
	XNOR6_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4]);
	XNOR6_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6]);
}
void XNOR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]){
	XNOR6_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	XNOR6_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8]);
}
void XNOR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]){
	XNOR6_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0]);
	XNOR6_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16]);
}
char XNOR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8){
	if ((XNOR4_1(in1, in2, in3, in4)=='0' && XNOR4_1(in5, in6, in7, in8) == '1') || (XNOR4_1(in1, in2, in3, in4)=='1' && XNOR4_1(in5, in6, in7, in8) == '0')){
		return '0';
	}
	else{
		return '1';
	}
}
void XNOR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]){
	output[0] = XNOR8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0]);
	output[1] = XNOR8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[0]);
}
void XNOR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]){
	XNOR8_2(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	XNOR8_2(&output[2], &in1[2], &in2[2], &in3[2], &in4[2], &in5[2], &in6[2], &in7[0], &in8[0]);
	XNOR8_2(&output[4], &in1[4], &in2[4], &in3[4], &in4[4], &in5[4], &in6[4], &in7[0], &in8[0]);
	XNOR8_2(&output[6], &in1[6], &in2[6], &in3[6], &in4[6], &in5[6], &in6[6], &in7[0], &in8[0]);
}
void XNOR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]){
	XNOR8_8(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	XNOR8_8(&output[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8]);
}
void XNOR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]){
	XNOR8_16(&output[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0]);
	XNOR8_16(&output[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16]);
}
