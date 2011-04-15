##################################                                             
#                                                                                        
#  Last update: 03-06-09       
#                                                                                        
#  Aimen Al-Refai 
#  Commands: 
#  make all, make clean, make
#                                                                                   
###################################


C    = gcc
OBJ  = simulator.o gates.o adders.o muxes.o registers.o shiftsignextend.o alu.o memory.o twosComp.o assembler.o control.o loader.o
LINKOBJ  = simulator.o gates.o adders.o muxes.o registers.o shiftsignextend.o alu.o memory.o twosComp.o assembler.o control.o loader.o

BIN  = simulator
RM = rm -f *~

.PHONY: all clean

all:  simulator                                                                                

clean:
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(C) $(LINKOBJ) -o "simulator"

simulator.o: simulator.c gates.h adders.h muxes.h registers.h shiftsignextend.h alu.h memory.h twosComp.h assembler.h control.h loader.h
	$(C) -c -ansi -Wall simulator.c

gates.o: gates.c gates.h
	$(C) -c -ansi -Wall gates.c

adders.o: adders.c adders.h
	$(C) -c -ansi -Wall adders.c

muxes.o: muxes.c muxes.h
	$(C) -c -ansi -Wall muxes.c

registers.o: registers.c registers.h
	$(C) -c -ansi -Wall registers.c

shiftsignextend.o: shiftsignextend.c shiftsignextend.h
	$(C) -c -ansi -Wall shiftsignextend.c

alu.o: alu.c alu.h
	$(C) -c -ansi -Wall alu.c

memory.o: memory.c memory.h
	$(C) -c -ansi -Wall memory.c

twosComp.o: twosComp.c twosComp.h
	$(C) -c -ansi -Wall twosComp.c

assembler.o: assembler.c assembler.h
	$(C) -c -ansi -Wall assembler.c

control.o: control.c control.h
	$(C) -c -ansi -Wall control.c

loader.o: loader.c loader.h
	$(C) -c -ansi -Wall loader.c
