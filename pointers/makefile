all: byvalue-tester bypointer-tester

byvalue-tester : byvalue.o
	$(CC) byvalue.o -o byvalue-tester

bypointer-tester : bypointer.o
	$(CC) bypointer.o -o bypointer-tester

byvalue.o: byvalue.c
	$(CC) -c byvalue.c

bypointer.o: bypointer.c
	$(CC) -c bypointer.c

clean:
	rm -f byvalue.o byvalue-tester
	rm -f bypointer.o bypointer-tester

