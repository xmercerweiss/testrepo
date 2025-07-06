
CC = gcc
CFLAGS = -Iinclude 
CFILES = src/*.c 

bin: $(CFILES)
	$(CC) $(CFLAGS) $^ -o $@

src/*.c:
	touch src/main.c

