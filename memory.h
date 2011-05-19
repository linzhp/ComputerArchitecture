#ifndef MEMORY_H_
#define MEMORY_H_

void MemoryAccess(char readout[32],
                  char address[32],
                  char writein[32],
                  char write,
                  char memcontents[4096][8]);

#endif /* MEMORY_H_ */
