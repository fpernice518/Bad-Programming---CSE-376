CC = gcc
CFLAGS = -g -Wall -Werror 

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
EXEC := $(SRCS:.c=)

LIB  := xmalloc.o

%: %.c  $(LIB)
	$(CC) $(CFLAGS) -c $@.c
	$(CC) $(CFLAGS) $(LIB) $@.o -o $@
	make clean
	

$(LIB): xmalloc.c
	$(CC) $(CFLAGS) -c $<

clean: 
	rm -f $(OBJS)

clean-all: clean
	rm -f $(EXEC)

