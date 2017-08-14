.PHONY: googletest

googletest:
	wget https://github.com/google/googletest/archive/release-1.8.0.tar.gz
	tar xf release-1.8.0.tar.gz
	cd googletest-release-1.8.0; \
	cmake -DBUILD_SHARED_LIBS=ON .; \
	make; \
	sudo make install

clean:
	rm -rf googletest-release-1.8.0
	rm release-1.8.0.tar.gz
