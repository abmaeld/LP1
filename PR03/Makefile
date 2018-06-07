
# CC and Flags:

CC = g++
FLAGS = -Wall -pedantic -std=c++11 -g -O0 -pg

# Program Name and Objects:

PROGRAM = Sapo++
OBJS = Sapo.o Pista.o Corrida.o Interface.o Arquivo.o Main.o 

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

Sapo.o:

	$(CC) $(FLAGS) -c src/Sapo.cpp 

Pista.o:

	$(CC) $(FLAGS) -c src/Pista.cpp 

Corrida.o:

	$(CC) $(FLAGS) -c src/Corrida.cpp 

Interface.o:

	$(CC) $(FLAGS) -c src/Interface.cpp 

Arquivo.o:

	$(CC) $(FLAGS) -c src/Arquivo.cpp 

Main.o:

	$(CC) $(FLAGS) -c src/Main.cpp 

clean:

	$(RM) *.o
	$(RM) build/*.o
	


