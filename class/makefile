objects = test.o Child.o

output: $(objects)
	g++ $(objects) -o output

Child.o: Child.cc Child.h
	g++ -c Child.cc
	 
test.o: test.cc Child.h
	g++ -c test.cc

clean:
	rm output $(objects)
