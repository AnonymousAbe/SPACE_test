all: main.cpp test_class.cpp
	g++ -o main main.cpp test_class.cpp -I.
