all: void-pointer-tester

void-pointer-tester : main.o
	$(CC) main.o -o void-pointer-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o void-pointer-tester
