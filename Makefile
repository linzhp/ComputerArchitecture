##################################                                             
#  Zhongpeng Lin 
#  Commands: 
#  make all, make clean, make
#                                                                                   
###################################                                                                      
DRIVER = driver3
C    = gcc
OBJ  = ${DRIVER}.o bwextenders.o multiplexers.o gates.o register_file.o adders.o shifter_signextend.o memory.o

BIN  = runDriver
RM = rm -f *~

.PHONY: all clean

all:  ${BIN}
	./${BIN}                                                                       

clean:
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(C) $(OBJ) -o ${BIN}

gatedriver.o: gatedriver.c gates.h
	$(C) -c gatedriver.c
	
gates.o: gates.c gates.h
	$(C) -c -ansi -Wall gates.c
	
${DRIVER}.o: ${DRIVER}.c shifter_signextend.h memory.h
	$(C) -c ${DRIVER}.c

bwextenders.o: bwextenders.c bwextenders.h
	$(C) -c -ansi -Wall bwextenders.c
	
multiplexers.o: multiplexers.c multiplexers.h
	$(C) -c -ansi -Wall multiplexers.c
	
register_file.o: register_file.c register_file.h
	$(C) -c -ansi -Wall register_file.c

adders.o: adders.c adders.h
	$(C) -c -ansi -Wall adders.c

shifter_signextend.o: shifter_signextend.c shifter_signextend.h
	$(C) -c -ansi -Wall shifter_signextend.c
	
memory.o: memory.c memory.h
	$(C) -c -ansi -Wall memory.c