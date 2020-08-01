vpath %.cc src
vpath %.h include

CPPFLAGS = -I include
objects = test.o Child.o

child: $(objects)
	g++ $^ -o $@

Child.o: Child.cc
	g++ $(CPPFLAGS) -c $<
	 
test.o: test.cc
	g++ $(CPPFLAGS) -c $<

.PHONY: clean
clean:
	rm child $(objects)
