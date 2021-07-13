all: bitmask-tester

bitmask-tester : main.o
	$(CC) main.o -o bitmask-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bitmask-tester

