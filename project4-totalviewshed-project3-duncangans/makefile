CC = gcc-7
CFLAGS = -Wall -O3 -std=c99 -lm -fopenmp

viewshed: viewshed.c
	$(CC) $(CFLAGS) -o $@ viewshed.c

viewshed_parallel: viewshed_parallel.c
	$(CC) $(CFLAGS) -o $@ viewshed_parallel.c

viewshed_blocked: viewshed_blocked.c
	$(CC) $(CFLAGS) -o $@ viewshed_blocked.c

clean:
	rm -f viewshed
