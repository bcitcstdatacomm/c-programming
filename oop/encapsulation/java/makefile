SOURCES = Main.java Clazz.java
OBJECTS = Main.class Clazz.class
BINARY  = Main

JFLAGS = -g
JC = javac

.SUFFIXES: .java .class
.java.class:
	$(JC) $(JFLAGS) $*.java

all: classes

classes: $(OBJECTS:.java=.class)

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: run
run: classes
	java $(BINARY)
