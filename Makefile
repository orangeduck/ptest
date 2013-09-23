CC = gcc
CFLAGS = -ansi -Wall -Werror -Wno-unused -g

all: example 
  
example: example.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@
  
clean:
	rm example.exe