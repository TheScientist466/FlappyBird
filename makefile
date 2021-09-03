compile:
	cmake CMakeLists.txt -B build
	cmake --build build

run:
	./build/FlappyBird