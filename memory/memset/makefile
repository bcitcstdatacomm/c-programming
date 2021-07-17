all: memset-tester

memset-tester : main.o
	$(CC) main.o -o memset-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o memset-tester
