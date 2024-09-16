build-clox:
	@mkdir -p build
	@cd build && cmake .. && make
	@cp build/clox .

