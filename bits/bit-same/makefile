all: bitsame-tester

bitsame-tester : main.o
	$(CC) main.o -o bitsame-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bitsame-tester

