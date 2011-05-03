#include "multiplexers.h"
#include "gates.h"

char mux_2_1(char in1, char in2, char select[1]){
	return OR2_1(AND2_1(in1, NOT1_1(select[0])), AND2_1(in2, select[0]));
}

void mux_2_8(char out[8], char in1[8], char in2[8], char select[1]){
	out[0] = mux_2_1(in1[0], in2[0], select);
	out[1] = mux_2_1(in1[1], in2[1], select);
	out[2] = mux_2_1(in1[2], in2[2], select);
	out[3] = mux_2_1(in1[3], in2[3], select);
	out[4] = mux_2_1(in1[4], in2[4], select);
	out[5] = mux_2_1(in1[5], in2[5], select);
	out[6] = mux_2_1(in1[6], in2[6], select);
	out[7] = mux_2_1(in1[7], in2[7], select);
}

void mux_2_16(char out[16], char in1[16], char in2[16], char select[1]){
	mux_2_8(&out[0], &in1[0], &in2[0], select);
	mux_2_8(&out[8], &in1[8], &in2[8], select);
}

void mux_2_32(char out[32], char in1[32], char in2[32], char select[1]){
	mux_2_16(&out[0], &in1[0], &in2[0], select);
	mux_2_16(&out[16], &in1[16], &in2[16], select);
}

char mux_4_1(char in1, char in2, char in3, char in4, char select[2]){
	return OR4_1(AND3_1(in1, NOT1_1(select[0]), NOT1_1(select[1])), \
			AND3_1(in2, NOT1_1(select[0]), select[1]), \
			AND3_1(in3, select[0], NOT1_1(select[1])), \
			AND3_1(in4, select[0], select[1]));
}

void mux_4_8(char out[8], char in1[8], char in2[8], char in3[8], char in4[8], char select[2]){
	out[0] = mux_4_1(in1[0], in2[0], in3[0], in4[0], select);
	out[1] = mux_4_1(in1[1], in2[1], in3[1], in4[1], select);
	out[2] = mux_4_1(in1[2], in2[2], in3[2], in4[2], select);
	out[3] = mux_4_1(in1[3], in2[3], in3[3], in4[3], select);
	out[4] = mux_4_1(in1[4], in2[4], in3[4], in4[4], select);
	out[5] = mux_4_1(in1[5], in2[5], in3[5], in4[5], select);
	out[6] = mux_4_1(in1[6], in2[6], in3[6], in4[6], select);
	out[7] = mux_4_1(in1[7], in2[7], in3[7], in4[7], select);
}

void mux_4_16(char out[16], char in1[16], char in2[16], char in3[16], char in4[16], char select[2]){
	mux_4_8(&out[0], &in1[0], &in2[0], &in3[0], &in4[0], select);
	mux_4_8(&out[8], &in1[8], &in2[8], &in3[8], &in4[8], select);
}

void mux_4_32(char out[32], char in1[32], char in2[32], char in3[32], char in4[32], char select[2]){
	mux_4_16(&out[0], &in1[0], &in2[0], &in3[0], &in4[0], select);
	mux_4_16(&out[16], &in1[16], &in2[16], &in3[16], &in4[16], select);
}

char mux_8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8, char select[3]){
	return OR8_1(AND4_1(in1, NOT1_1(select[0]), NOT1_1(select[1]), NOT1_1(select[2])),
			AND4_1(in2, NOT1_1(select[0]), NOT1_1(select[1]), select[2]),
			AND4_1(in3, NOT1_1(select[0]), select[1], NOT1_1(select[2])),
			AND4_1(in4, NOT1_1(select[0]), select[1], select[2]),
			AND4_1(in5, select[0], NOT1_1(select[1]), NOT1_1(select[2])),
			AND4_1(in6, select[0], NOT1_1(select[1]), select[2]),
			AND4_1(in7, select[0], select[1], NOT1_1(select[2])),
			AND4_1(in8, select[0], select[1], select[2])
			);
}

void mux_8_8(char out[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8], char select[3]){
	out[0] = mux_8_1(in1[0], in2[0], in3[0], in4[0], in5[0], in6[0], in7[0], in8[0], select);
	out[1] = mux_8_1(in1[1], in2[1], in3[1], in4[1], in5[1], in6[1], in7[1], in8[1], select);
	out[2] = mux_8_1(in1[2], in2[2], in3[2], in4[2], in5[2], in6[2], in7[2], in8[2], select);
	out[3] = mux_8_1(in1[3], in2[3], in3[3], in4[3], in5[3], in6[3], in7[3], in8[3], select);
	out[4] = mux_8_1(in1[4], in2[4], in3[4], in4[4], in5[4], in6[4], in7[4], in8[4], select);
	out[5] = mux_8_1(in1[5], in2[5], in3[5], in4[5], in5[5], in6[5], in7[5], in8[5], select);
	out[6] = mux_8_1(in1[6], in2[6], in3[6], in4[6], in5[6], in6[6], in7[6], in8[6], select);
	out[7] = mux_8_1(in1[7], in2[7], in3[7], in4[7], in5[7], in6[7], in7[7], in8[7], select);
}

void mux_8_16(char out[16], char in1[16], char in2[16], char in3[16], char in4[16], char in5[16], char in6[16], char in7[16], char in8[16], char select[3]){
	mux_8_8(&out[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0], select);
	mux_8_8(&out[8], &in1[8], &in2[8], &in3[8], &in4[8], &in5[8], &in6[8], &in7[8], &in8[8], select);
}

void mux_8_32(char out[32], char in1[32], char in2[32], char in3[32], char in4[32], char in5[32], char in6[32], char in7[32], char in8[32], char select[3]){
	mux_8_16(&out[0], &in1[0], &in2[0], &in3[0], &in4[0], &in5[0], &in6[0], &in7[0], &in8[0], select);
	mux_8_16(&out[16], &in1[16], &in2[16], &in3[16], &in4[16], &in5[16], &in6[16], &in7[16], &in8[16], select);
}
