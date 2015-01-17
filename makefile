CC=g++
CFLAGS=-Wall -g

mainmake: main.c allinc.h
	g++ main.c

clean:
	rm -f main a.out
