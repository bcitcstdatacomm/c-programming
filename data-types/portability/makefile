all: portability-tester

portability-tester : main.o
	$(CC) main.o -o portability-tester

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f main.o portability-tester

