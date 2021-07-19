SOURCES = main.c
OBJECTS = main.o
BINARY = tester

# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

.PHONY: all
all: lint $(BINARY)

.PHONY: tester
$(BINARY) : $(OBJECTS)
	$(CC) -o $(BINARY) $(LDFLAGS) $(LDLIBS) $(OBJECTS)

$(OBJECTS):

.PHONY: lint
lint:
	$(LINT) $(LINTFLAGS) $(SOURCES) --

.PHONY: clean
clean:
	$(RM) $(BINARY) $(OBJECTS)

.PHONY: run
run: tester
	./$(BINARY) $(RUN_ARGS)

.PHONY: lint run-memcheck
run-memcheck: tester
	$(MEMECHECK) $(MEMCHECK_FLAGS) ./$(BINARY) $(RUN_ARGS)