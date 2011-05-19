#include <string.h>
#include "memory.h"

int addr_decode_32(char addr[32]){
	int number=0;
	int i;
	for(i=0; i<32; i++){
		number+=(1<<i)*(addr[31-i]-'0');
	}
	return number;
}

void MemoryAccess(char readout[32],
                  char address[32],
                  char writein[32],
                  char write,
                  char memcontents[4096][8])
{
	int addressNumber=addr_decode_32(address);
	if(write == '1'){
		strncpy(memcontents[addressNumber], writein, 32);
	}else{
		strncpy(readout, memcontents[addressNumber], 32);
	}
}

