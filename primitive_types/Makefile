parity.o: parity.cpp
	clang++ -std=c++11 -c parity.cpp
test: parity.o
	clang++ -std=c++11 parity_unittest.cpp parity.o -lgtest -lgtest_main -o test.app
	./test.app

clean:
	-rm *.o
	-rm *.app

all: test
