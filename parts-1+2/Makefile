CC = gcc
CFLAGS = -g -Wall -Werror

SRCS  := $(wildcard *.c)
PROGS := $(sort $(SRCS:.c=))

all        : all-gcc

all-gcc    : $(PROGS) 
	     @ #uses make defaults
 
run        : run-gcc

run-gcc    : $(PROGS)
	     @for p in $(PROGS); do ./$$p; done
	
run-%-gcc  : prog-%
	     @./$(<)

prog-%-gcc : prog-%.c
	     @$(CC) $(CFLAGS) $< -o $@

clean      : 
	     @rm -f $(PROGS)




