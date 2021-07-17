all: as-parameter-tester

as-parameter-tester : main.o
	$(CC) main.o -o as-parameter-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o as-parameter-tester
