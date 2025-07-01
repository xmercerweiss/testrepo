
CC = gcc
CFILES = src.c render.c utils.c histogram.h

bin : $(CFILES)
	$(CC) $^ -o $@

