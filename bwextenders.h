#ifndef BWEXTENDER_H_
#define BWEXTENDER_H_

/*the BWExtend function to make an n-bit value from the one-bit value in*/
void BWExtend1_1(char out[1], char in);
void BWExtend1_2(char out[2], char in);
void BWExtend1_8(char out[8], char in);
void BWExtend1_16(char out[16], char in);
void BWExtend1_32(char out[32], char in);
#endif /* BWEXTENDER_H_ */
