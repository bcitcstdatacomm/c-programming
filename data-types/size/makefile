all: size-tester

size-tester : main.o
	$(CC) main.o -o size-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o size-tester

