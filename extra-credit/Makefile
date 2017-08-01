CC = gcc
CFLAGS = -Wall -Werror -g
LIB = -lefence

SRC := $(wildcard *.c)
EXEC := $(SRC:.c=)
EXEC += $(SRC:.c=-efence)
EXEC += $(SRC:.c=-efence-pbelow)
EXEC += $(SRC:.c=-efence-pfree)
ENVI := EF_PROTECT_BELOW=1 

#used to make regular, non-electric-fence linked files
%:%.c
	$(CC) $(CFLAGS) $< -o $@
#defualt efence build
%-efence : %.c
	 $(CC) $(CFLAGS) $(LIB) $< -o $@

#used to protect underflows
%-efence-pbelow : %.c
	EF_PROTECT_BELOW=1
	$(CC) $(CFLAGS) $(LIB) $< -o $@

#used to protect free
%-efence-pfree : %.c
	EF_PROTECT_FREE=1
	$(CC) $(CFLAGS) $(LIB) $< -o $@

clean: 
	rm -f $(EXEC)

