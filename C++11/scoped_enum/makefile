CC := g++

objects = test.o

all: my_exec

my_exec: $(objects)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $<

.PHONY: clean help
clean:
	rm my_exec $(objects)

help:
	@echo "make"
	@echo "make clean"
