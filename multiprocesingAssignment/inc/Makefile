C = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: cpp

cpp: $(OBJ)/multiprocess.o
		$(CC) $(LFLAGS) $(BIN)/cpp $(OBJ)/multiproce.o

$(OBJ)/multiprocess.o: $(SRC)/multiprocess.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/multiprocess.cpp 
			mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
			rm -f a.out cpp
				rm -f *.o
					rm -f $(OBJ)/*.o
						rm -f $(BIN)/cpp
							@echo "Done!"

valgrind:
		valgrind --leak-check=full $(BIN)/app
			mv valgrind $(BIN)
