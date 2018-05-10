
# CC and Flags:

CC = g++
FLAGS = -Wall -pedantic -std=c++11 -g -O0 -pg -w

# Program Name and Objects:

PROGRAM = Main
OBJS = Main.o

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

clean:

	$(RM) *.o
	$(RM) build/*.o