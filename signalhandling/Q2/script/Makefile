CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/sig2.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/sig2.o


$(OBJ)/sig2.o: $(SRC)/sig2.cpp
	$(CC) $(CFLAGS) $(SRC)/sig2.cpp $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"
