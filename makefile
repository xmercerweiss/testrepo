
CC = gcc
CFILES = src.c hi.c

bin : $(CFILES)
	$(CC) $^ -o $@

hi.c :
	touch hi.c

