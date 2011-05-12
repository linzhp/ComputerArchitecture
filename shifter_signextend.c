#include "shifter_signextend.h"
#include "bwextenders.h"
#include <string.h>

void shiftleft2x(char out[32], char in[32]){
	strcpy(out, &in[2]);
	out[30]='0';
	out[31]='0';
}

void signextend(char out[32], char in[16]){
	BWExtend1_16(out, in[0]);
	strcpy(&out[16], in);
}
