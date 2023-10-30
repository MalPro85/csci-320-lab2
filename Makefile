CC = gcc

time: main.o ipc.o time.o
	$(CC) -o time main.o ipc.o time.o -lm

main.o : main.c lab2.h
	$(CC) -c main.c

ipc.o: ipc.c lab2.h
	$(CC) -c ipc.c

time.o: time.c lab2.h
	$(CC) -c time.c

clean:
	rm time main.o ipc.o time.o