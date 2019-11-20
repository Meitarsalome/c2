CC=gcc
AR=ar
Flags= -Wall -g

all:myBank.o main.o

myBank.o : myBank.c myBank.h
		$(CC) $(Flags) -c myBank.c
main.o : main.c myBank.h
		$(CC) $(Flags) -c main.c

.PHONY: clean all 


clean: 
		rm -f *.o
