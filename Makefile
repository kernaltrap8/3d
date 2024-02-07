3d: main.o 3d.o window.o
	g++ build/main.o build/3d.o build/window.o -o 3d -lX11
main.o:
	mkdir -p build
	g++ -c src/main.cpp -o build/main.o
3d.o:
	g++ -c src/3d.cpp -o build/3d.o
window.o:
	g++ -c src/window.cpp -o build/window.o
clean:
	rm *.o
