CC := g++

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
	@echo "make"
	@echo "make clean"
