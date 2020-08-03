vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = test.o human.o engineer.o

all: engineer

engineer: $(objects)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $<

.PHONY: clean help
clean:
	rm engineer $(objects)

help:
	@echo "make"
	@echo "make clean"
