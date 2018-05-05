
# CC and Flags:

CC = g++
FLAGS = -Wall -pedantic -std=c++11 -g -O0 -pg -lm

# Program Name and Objects:

PROGRAM = Programa
OBJS = Main.o Monstro.o Batalha.o

# OS' Shell Commands: 

ifeq ($(OS),Windows_NT)
    
    RM = del
    MV = move

else
    
    RM = rm
    MV = mv

endif

# Makefile:

$(PROGRAM): $(OBJS)

	$(CC) $(OBJS) -o bin/$(PROGRAM)
	$(MV) $(OBJS) build/

Main.o:

	$(CC) $(FLAGS) -c src/Main.cpp 

Monstro.o:

	$(CC) $(FLAGS) -c src/Monstro.cpp 

Batalha.o:

	$(CC) $(FLAGS) -c src/Batalha.cpp 

clean:

	$(RM) build/*.o


