
CC = /usr/bin/gcc
CFLAGS = -Wall -Wextra -g

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, %.o, $(SRC))

all: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

%.o: src/%.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm main *.o
