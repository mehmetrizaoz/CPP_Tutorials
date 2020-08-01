objects = test.o Child.o

child: $(objects)
	@echo "child executable is being created"
	g++ $^ -o $@

Child.o: Child.cc Child.h
	g++ -c $^
	 
test.o: test.cc Child.h
	g++ -c $^

.PHONY: clean
clean:
	rm child $(objects)
