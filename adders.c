#include "adders.h"
#include "gates.h"

char AddRCA_1(char sumout[1], char in1, char in2, char cin)
{
	char cout;
	cout = OR3_1(AND2_1(in1, in2), AND2_1(in1, cin), AND2_1(in2, cin));
	sumout[0] = XOR3_1(in1, in2, cin);
	return cout;
}

char AddRCA_8(char sumout[8], char in1[8], char in2[8], char cin){
	char cout;
	cout = AddRCA_1(&sumout[7], in1[7], in2[7], cin);
	cout = AddRCA_1(&sumout[6], in1[6], in2[6], cout);
	cout = AddRCA_1(&sumout[5], in1[5], in2[5], cout);
	cout = AddRCA_1(&sumout[4], in1[4], in2[4], cout);
	cout = AddRCA_1(&sumout[3], in1[3], in2[3], cout);
	cout = AddRCA_1(&sumout[2], in1[2], in2[2], cout);
	cout = AddRCA_1(&sumout[1], in1[1], in2[1], cout);
	cout = AddRCA_1(&sumout[0], in1[0], in2[0], cout);
	return cout;
}

char AddRCA_16(char sumout[16], char in1[16], char in2[16], char cin){
	char cout;
	cout = AddRCA_8(&sumout[8], &in1[8], &in2[8], cin);
	cout = AddRCA_8(&sumout[0], &in1[0], &in2[0], cout);
	return cout;
}

char AddRCA_32(char sumout[32], char in1[32], char in2[32], char cin){
	char cout;
	cout = AddRCA_16(&sumout[16], &in1[16], &in2[16], cin);
	cout = AddRCA_16(&sumout[0], &in1[0], &in2[0], cout);
	return cout;
}
