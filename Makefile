STD=-ansi
CC=gcc
CFLAGS=$(STD) -Wall -Werror -Wno-unused -g

all: example 
  
example: example.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@; [ $$? == 1 ]
  
example2: example2.c ptest.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@; [ $$? == 1 ]
  
clean:
	find . -regex ".*example\(\.exe\)*" | xargs rm
