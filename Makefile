CC      ?= cc
CFLAGS  ?= -Wall -Wextra -std=c11

OBJ     := src/calculator.o src/string_utils.o

all: main test

main: src/main.c $(OBJ)
	$(CC) $(CFLAGS) -o $@ src/main.c $(OBJ)

test: tests/test_main.c $(OBJ)
	$(CC) $(CFLAGS) -o $@ tests/test_main.c $(OBJ)

run: main
	./main

check: test
	./test

clean:
	rm -f main test $(OBJ)

.PHONY: all run check clean