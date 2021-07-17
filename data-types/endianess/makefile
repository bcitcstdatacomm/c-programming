all: endian-tester

endian-tester : main.o
	$(CC) main.o -o endian-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o endian-tester

