vpath %.cc src
vpath %.h include

CPPFLAGS = -I include
objects = test.o Child.o

child: $(objects)
	g++ $^ -o $@

%.o: %.c
	g++ $(CPPFLAGS) -c $<

.PHONY: clean
clean:
	rm child $(objects)
