#ifndef MULTIPLEXERS_H_
#define MULTIPLEXERS_H_

char mux_2_1(char in1, char in2, char select[1]);
void mux_2_8(char out[8], char in1[8], char in2[8], char select[1]);
void mux_2_16(char out[16], char in1[16], char in2[16], char select[1]);
void mux_2_32(char out[32], char in1[32], char in2[32], char select[1]);

char mux_4_1(char in1, char in2, char in3, char in4, char select[2]);
void mux_4_8(char out[8], char in1[8], char in2[8], char in3[8], char in4[8], char select[2]);
void mux_4_16(char out[16], char in1[16], char in2[16], char in3[8], char in4[8], char select[2]);
void mux_4_32(char out[32], char in1[32], char in2[32], char in3[8], char in4[8], char select[2]);

char mux_8_1(char in1, char in2, char in3, char in4, char in5, char in6, char in7, char in8, char select[3]);
void mux_8_8(char out[8], char in1[8], char in2[8], char in3[8], char in4[8], char in5[8], char in6[8], char in7[8], char in8[8], char select[3]);
void mux_8_16(char out[16], char in1[16], char in2[16], char in3[8], char in4[8], char in5[16], char in6[16], char in7[8], char in8[8], char select[3]);
void mux_8_32(char out[32], char in1[32], char in2[32], char in3[8], char in4[8], char in51[32], char in6[32], char in7[8], char in8[8], char select[3]);

#endif /* MULTIPLEXERS_H_ */
