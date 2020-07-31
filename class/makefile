objects = test.o Child.o

output: $(objects)
	g++ $(objects) -o output

Child.o: Child.cc Child.h
test.o: test.cc Child.h

clean:
	rm output $(objects)
