vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = test.o

all: exec

exec: $(objects)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $<

.PHONY: clean help
clean:
	rm exec $(objects)

help:
	@echo "sudo apt-get install libboost-all-dev"
	@echo "make"
	@echo "make clean"
