
CC = gcc
CFILES = src.c 

bin : $(CFILES)
	$(CC) $^ -o $@

