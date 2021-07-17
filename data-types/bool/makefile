all: bool-tester

bool-tester : main.o
	$(CC) main.o -o bool-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bool-tester

