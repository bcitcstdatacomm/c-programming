all: sizeof-tester

size-tester : main.o
	$(CC) main.o -o sizeof-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o sizeof-tester

