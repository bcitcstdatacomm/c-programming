SOURCES = Main.java Parent.java Child.java
OBJECTS = Main.class Parent.class Child.class
BINARY = Main
JC = javac
JFLAGS = -g

.PHONY: all
all: $(BINARY)

#.PHONY: tester
.SUFFIXES: .java .class
.java.class:
	$(JC) $(JFLAGS) $*.java

$(OBJECTS):

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: run
run: tester
	java $(BINARY)
