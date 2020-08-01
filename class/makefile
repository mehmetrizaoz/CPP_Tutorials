objects = test.o Child.o

child: $(objects)
	@echo "child executable is being created"
	g++ $^ -o $@

Child.o: Child.cc Child.h
test.o: test.cc Child.h

.PHONY: clean
clean:
	rm child $(objects)
