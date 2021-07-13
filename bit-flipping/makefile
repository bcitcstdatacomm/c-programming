all: bitflipping-tester

bitflipping-tester : main.o
	$(CC) main.o -o bitflipping-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bitflipping-tester

