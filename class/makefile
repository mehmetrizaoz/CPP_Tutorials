hello: Child.o test.o
	g++ -Wall Child.o test.o -o hello
Child.o: Child.cc
	g++ -Wall -c -o Child.o
test.o: test.cpp
	g++ -Wall -c test.cc -o test.o
