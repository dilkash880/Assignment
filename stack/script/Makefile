CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/8b.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/8b.o


$(OBJ)/8b.o: $(SRC)/8b.cpp
	$(CC) $(CFLAGS) $(SRC)/8b.cpp $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"