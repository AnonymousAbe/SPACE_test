all: main.cpp test_class.cpp
	gcc -o main main.cpp test_class.cpp -I.
