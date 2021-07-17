all: direct-tester

direct-tester : main.o
	$(CC) main.o -o direct-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o direct-tester
