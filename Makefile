CC=gcc
STD=-ansi
CFLAGS= $(STD) -Wall -Werror -Wno-unused -g

all: example example2
  
example: example.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@; true
  
example2: example2.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@; true
  
clean:
	rm -f example.exe example2.exe example example2
