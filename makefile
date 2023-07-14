all:
	g++ stacklib/stack.h 
	g++ main.cpp -o main

run:
	g++ stacklib/stack.h 
	g++ main.cpp -o main
	./main