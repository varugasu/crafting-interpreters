build:
	mkdir -p build
	cd build && cmake .. && make
	cp build/jlox .

