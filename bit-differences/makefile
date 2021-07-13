all: bitdifferences-tester

bitdifferences-tester : main.o
	$(CC) main.o -o bitdifferences-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o bitdifferences-tester

