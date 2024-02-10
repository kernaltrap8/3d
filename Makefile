3d: main.o 3d.o window.o engine.o
	g++ build/main.o build/3d.o build/window.o build/engine.o -o 3d -lX11
main.o:
	mkdir -p build
	g++ -c src/main.cpp -o build/main.o
3d.o:
	g++ -c src/3d.cpp -o build/3d.o
window.o:
	g++ -c src/window.cpp -o build/window.o
engine.o:
	g++ -c src/engine.cpp -o build/engine.o
clean:
	rm build/*.o