all: bitshifting-tester

bitshifting-tester : main.o
	$(CC) main.o -o bitshifting-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bitshifting-tester

