vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = test.o human.o engineer.o

all: engineer

engineer: $(objects)
	@echo "executable is being created."
	$(CC) $^ -o $@

%.o: %.c
	@echo "object files are being created."
	$(CC) $(CPPFLAGS) -c $<

.PHONY: clean help
clean:
	@echo "warning output files are being removed."
	rm engineer $(objects)

help:
	@echo "make"
	@echo "make clean"
