CC=gcc
STD=-ansi
CFLAGS= $(STD) -Wall -Werror -Wno-unused -g

all: example example2
  
example: example.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@; [ $$? == 1 ]
  
example2: example2.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@; [ $$? == 1 ]
  
clean:
	rm -f example.exe example2.exe example example2
