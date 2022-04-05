dependency:
	cd build && cmake .. --graphviz=test.dot && dot -Tpng test.dot -o test.png

prepare:
	rm -rf build
	mkdir build
	cd build && conan install .. && cd ..
