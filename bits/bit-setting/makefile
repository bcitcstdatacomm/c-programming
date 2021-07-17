all: bitset-tester

bitset-tester : main.o
	$(CC) main.o -o bitset-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bitset-tester

