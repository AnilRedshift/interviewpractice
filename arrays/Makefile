even_sort.o: even_sort.cpp
	clang++ -std=c++11 -c --debug even_sort.cpp
test: even_sort.o
	clang++ -std=c++11 --debug even_sort_unittest.cpp even_sort.o -lgtest -lgtest_main -o test.app
	./test.app

clean:
	-rm *.o
	-rm *.app

all: test
