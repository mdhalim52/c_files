CC = gcc
CFLAGS = -Wall -g
LDLIBS = -lcs50 -lm

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)
