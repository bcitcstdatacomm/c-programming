SOURCES = main.c
OBJECTS = main.o
BINARY = tester

.PHONY: all
all: $(BINARY)

.PHONY: tester
$(BINARY) : $(OBJECTS)
	$(CC) -o $(BINARY) $(LDFLAGS) $(LDLIBS) $(OBJECTS)

$(OBJECTS):

.PHONY: lint
lint:
	$(LINT) $(LINTFLAGS) $(SOURCES) --

.PHONY: clean
clean:
	rm -f $(BINARY) $(OBJECTS)

.PHONY: run
run: tester
	./$(BINARY)

.PHONY: run-memcheck
run-memcheck: $(BINARY)
	$(MEMECHECK) $(MEMCHECK_FLAGS) ./$(BINARY)
