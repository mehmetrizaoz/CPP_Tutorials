output: test.o Child.o
	g++ test.o Child.o -o output

Child.o: Child.cc Child.h
	g++ -c Child.cc
	 
test.o: test.cc Child.h
	g++ -c test.cc

clean:
	rm Child.o test.o output
