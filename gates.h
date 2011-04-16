/****************
#  Zhongpeng Lin
#  header file
******************/

#ifndef GATES_H
#define GATES_H

/*the BWExtend function to make an n-bit value from the one-bit value in*/
void BWExtend1_1(char out[1], char in);
void BWExtend1_2(char out[2], char in);


/*not gates*/
char NOT1_1(char in1);
void NOT1_2(char output[2], char in1[2]);
void NOT1_8(char output[8], char in1[8]);
void NOT1_16(char output[16], char in1[16]);
void NOT1_32(char output[32], char in1[32]);

/*and gates*/
char AND2_1(char in1, char in2);
void AND2_2(char output[2], char in1[2], char in2[2]);
void AND2_8(char output[8], char in1[8], char in2[8]);
void AND2_16(char output[16], char in1[16], char in2[16]);
void AND2_32(char output[32], char in1[32], char in2[32]);

char AND3_1(char in1, char in2, char in3);
void AND3_2(char output[2], char in1[2], char in2[2], char in3[2]);
void AND3_8(char output[8], char in1[8], char in2[8], char in3[8]);
void AND3_16(char output[16], char in1[16], char in2[16], char in3[16]);
void AND3_32(char output[32], char in1[32], char in2[32], char in3[32]);

char AND4_1(char in1, char in2, char in3, char in4);
void AND4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]);
void AND4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]);
void AND4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]);
void AND4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]);

char AND6_1(char in1, char in2, char in3, char in4, char in5, char in6);
void AND6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]);
void AND6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]);
void AND6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]);
void AND6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]);

char AND8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8);
void AND8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]);
void AND8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]);
void AND8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]);
void AND8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]);

/*or gates*/
char OR2_1(char in1, char in2);
void OR2_2(char output[2], char in1[2], char in2[2]);
void OR2_8(char output[8], char in1[8], char in2[8]);
void OR2_16(char output[16], char in1[16], char in2[16]);
void OR2_32(char output[32], char in1[32], char in2[32]);

char OR3_1(char in1, char in2, char in3);
void OR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
void OR3_8(char output[8], char in1[8], char in2[8], char in3[8]);
void OR3_16(char output[16], char in1[16], char in2[16], char in3[16]);
void OR3_32(char output[32], char in1[32], char in2[32], char in3[32]);

char OR4_1(char in1, char in2, char in3, char in4);
void OR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]);
void OR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]);
void OR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]);
void OR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]);

char OR6_1(char in1, char in2, char in3, char in4, char in5, char in6);
void OR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]);
void OR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]);
void OR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]);
void OR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]);

char OR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8);
void OR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]);
void OR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]);
void OR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]);
void OR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]);

/*NAND gates*/
char NAND2_1(char in1, char in2);
void NAND2_2(char output[2], char in1[2], char in2[2]);
void NAND2_8(char output[8], char in1[8], char in2[8]);
void NAND2_16(char output[16], char in1[16], char in2[16]);
void NAND2_32(char output[32], char in1[32], char in2[32]);

char NAND3_1(char in1, char in2, char in3);
void NAND3_2(char output[2], char in1[2], char in2[2], char in3[2]);
void NAND3_8(char output[8], char in1[8], char in2[8], char in3[8]);
void NAND3_16(char output[16], char in1[16], char in2[16], char in3[16]);
void NAND3_32(char output[32], char in1[32], char in2[32], char in3[32]);

char NAND4_1(char in1, char in2, char in3, char in4);
void NAND4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]);
void NAND4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]);
void NAND4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]);
void NAND4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]);

char NAND6_1(char in1, char in2, char in3, char in4, char in5, char in6);
void NAND6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]);
void NAND6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]);
void NAND6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]);
void NAND6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]);

char NAND8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8);
void NAND8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]);
void NAND8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]);
void NAND8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]);
void NAND8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]);

/*NOR gates*/
char NOR2_1(char in1, char in2);
void NOR2_2(char output[2], char in1[2], char in2[2]);
void NOR2_8(char output[8], char in1[8], char in2[8]);
void NOR2_16(char output[16], char in1[16], char in2[16]);
void NOR2_32(char output[32], char in1[32], char in2[32]);

char NOR3_1(char in1, char in2, char in3);
void NOR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
void NOR3_8(char output[8], char in1[8], char in2[8], char in3[8]);
void NOR3_16(char output[16], char in1[16], char in2[16], char in3[16]);
void NOR3_32(char output[32], char in1[32], char in2[32], char in3[32]);

char NOR4_1(char in1, char in2, char in3, char in4);
void NOR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]);
void NOR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]);
void NOR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]);
void NOR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]);

char NOR6_1(char in1, char in2, char in3, char in4, char in5, char in6);
void NOR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]);
void NOR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]);
void NOR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]);
void NOR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]);

char NOR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8);
void NOR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]);
void NOR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]);
void NOR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]);
void NOR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]);

/*XOR gates*/
char XOR2_1(char in1, char in2);
void XOR2_2(char output[2], char in1[2], char in2[2]);
void XOR2_8(char output[8], char in1[8], char in2[8]);
void XOR2_16(char output[16], char in1[16], char in2[16]);
void XOR2_32(char output[32], char in1[32], char in2[32]);

char XOR3_1(char in1, char in2, char in3);
void XOR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
void XOR3_8(char output[8], char in1[8], char in2[8], char in3[8]);
void XOR3_16(char output[16], char in1[16], char in2[16], char in3[16]);
void XOR3_32(char output[32], char in1[32], char in2[32], char in3[32]);

char XOR4_1(char in1, char in2, char in3, char in4);
void XOR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]);
void XOR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]);
void XOR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]);
void XOR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]);

char XOR6_1(char in1, char in2, char in3, char in4, char in5, char in6);
void XOR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]);
void XOR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]);
void XOR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]);
void XOR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]);

char XOR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8);
void XOR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]);
void XOR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]);
void XOR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]);
void XOR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]);

/*XNOR gates*/
char XNOR2_1(char in1, char in2);
void XNOR2_2(char output[2], char in1[2], char in2[2]);
void XNOR2_8(char output[8], char in1[8], char in2[8]);
void XNOR2_16(char output[16], char in1[16], char in2[16]);
void XNOR2_32(char output[32], char in1[32], char in2[32]);

char XNOR3_1(char in1, char in2, char in3);
void XNOR3_2(char output[2], char in1[2], char in2[2], char in3[2]);
void XNOR3_8(char output[8], char in1[8], char in2[8], char in3[8]);
void XNOR3_16(char output[16], char in1[16], char in2[16], char in3[16]);
void XNOR3_32(char output[32], char in1[32], char in2[32], char in3[32]);

char XNOR4_1(char in1, char in2, char in3, char in4);
void XNOR4_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2]);
void XNOR4_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8]);
void XNOR4_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16]);
void XNOR4_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32]);

char XNOR6_1(char in1, char in2, char in3, char in4, char in5, char in6);
void XNOR6_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2]);
void XNOR6_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8]);
void XNOR6_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16]);
void XNOR6_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32]);

char XNOR8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8);
void XNOR8_2(char output[2], char in1[2], char in2[2], char in3[2], char in4[2], char in5[2], char in6[2], char in7[2], char in8[2]);
void XNOR8_8(char output[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8]);
void XNOR8_16(char output[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16]);
void XNOR8_32(char output[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32]);

#endif
