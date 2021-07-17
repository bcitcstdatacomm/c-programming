all: memcpy-tester

memcpy-tester : main.o
	$(CC) main.o -o memcpy-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o memcpy-tester
