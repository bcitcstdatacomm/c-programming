all: allocation-tester

allocation-tester : main.o
	$(CC) main.o -o allocation-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o allocation-tester
