CXX = g++ -g -std=c++11
INC =-Iinclude
PHONY=all
all: csvread
csvread: main.o Reader.o
	$(CXX) $(INC) main.o Reader.o -o csvread
main.o: ./src/main.cpp
	$(CXX) $(INC) -c ./src/main.cpp
Reader.o: ./src/Reader.cpp
	$(CXX) $(INC) -c ./src/Reader.cpp
clean:
	rm *.o csvread