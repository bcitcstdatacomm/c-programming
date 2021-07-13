all: memory-tester

memory-tester : main.o
	$(CC) main.o -o memory-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o memory-tester

