# create by code-ex0
# at 2022-06-20

CC = gcc
CFLAGS = -Wall -O2 -g -std=c11
EXE = exe


run: main.c node.c
	$(CC) $(CFLAGS) main.c node.c -o $(EXE) && ./$(EXE)
