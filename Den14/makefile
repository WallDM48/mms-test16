
build: linkedlist.c linkedlist.h main.c
	mkdir build
	gcc -c linkedlist.c 
	gcc -c main.c
	gcc linkedlist.o main.o -o mainExe
	mv *.o mainExe ./build
clean: 
	rm -r build
run : 
	./build/mainExe
	
	