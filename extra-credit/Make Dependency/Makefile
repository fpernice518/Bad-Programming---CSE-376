CC = gcc
CFLAGS = -Wall -Werror -g
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

leak: $(SRCS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

.PHONY: clean

clean:
	$(RM) $(OBJS) $(DEPS) test

-include $(DEPS)
