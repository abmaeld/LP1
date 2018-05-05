
# CC and Flags:

CC = g++
FLAGS = -Wall -pedantic -std=c++11 -g -O0 -pg

# Program Name and Objects:

PROGRAM = Sapo++
OBJS = Main.o Sapo.o

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
	$(MV) src/*.hpp include/
	$(MV) $(OBJS) build/

Main.o:

	$(MV) include/*.hpp src/
	$(CC) $(FLAGS) -c src/Main.cpp 

Sapo.o:

	$(CC) $(FLAGS) -c src/Sapo.cpp 

clean:

	$(RM) *.o
	$(RM) build/*.o


