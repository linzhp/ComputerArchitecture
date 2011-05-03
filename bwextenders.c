#include "bwextenders.h"
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

void BWExtend1_8(char out[8], char in){
	BWExtend1_2(&out[0], in);
	BWExtend1_2(&out[2], in);
	BWExtend1_2(&out[4], in);
	BWExtend1_2(&out[6], in);
}

void BWExtend1_16(char out[16], char in){
	BWExtend1_8(&out[0], in);
	BWExtend1_8(&out[8], in);
}

void BWExtend1_32(char out[32], char in){
	BWExtend1_16(&out[0], in);
	BWExtend1_16(&out[16], in);
}
