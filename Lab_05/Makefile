targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) task_1/src/main.c -o dist/1.bin
	$(CC) $(C_OPTS) task_2/src/main.c -o dist/2.bin
	$(CC) $(C_OPTS) task_3/src/main.c -o dist/3.bin
	$(CC) $(C_OPTS) task_4/src/main.c -o dist/4.bin
	$(CC) $(C_OPTS) task_5/src/main.c -o dist/5.bin
	$(CC) $(C_OPTS) task_6/src/main.c -o dist/6.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
