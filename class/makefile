vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = test.o Child.o

all: child

child: $(objects)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $<

scoping_issue:
	@$(call parent,one,two)

.PHONY: clean help
clean:
	rm child $(objects)

help:
	@echo "make"
	@echo "make clean"
