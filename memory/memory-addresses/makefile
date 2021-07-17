all: address-tester

address-tester : main.o
	$(CC) main.o -o address-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o address-tester

