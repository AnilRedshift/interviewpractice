range.o: range.cpp
	clang++ -std=c++11 -c range.cpp
test: range.o
	clang++ -std=c++11 range_unittest.cpp range.o -lgtest -lgtest_main -o test.app
	./test.app

clean:
	-rm *.o
	-rm *.app

all: test
