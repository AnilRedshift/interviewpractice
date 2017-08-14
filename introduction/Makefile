range.o: range.cpp
	clang++ -c range.cpp
test: range.o
	clang++ range_unittest.cpp range.o -lgtest -lgtest_main -o test.app
	./test.app

clean:
	-rm *.o
	-rm *.app

all: test
