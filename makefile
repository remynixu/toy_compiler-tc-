BIN = bc
CC = gcc
CFLAGS = -std=c89 -Wpedantic -Wall -Wextra

SRC = $(wildcard *.c) $(wildcard */*.c) $(wildcard */*/*.c)
OBJS = $(SRC:.c=.o)

.PHONY: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(wildcard %.o): $(wildcard %.c)
	$(CC) $(CFLAGS) $< -o $@
