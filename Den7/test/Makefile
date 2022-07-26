
compileAll:1-comparator.o 1-compDefinitions.o 1-comparator.h
	cc -o compileAll 1-comparator.o 1-compDefinitions.o 1-comparator.h
1-comparator.o:1-comparator.c
	cc -c 1-comparator.c
1-compDefinitions.o:1-compDefinitions.c
	cc -c 1-compDefinitions.c
	ar -rcs lib1-compDefinitionslib.a 1-compDefinitions.o
	gcc -fPIC -c 1-compDefinitions.c -o obj
	gcc -shared -o lib1-compDefinitions.so obj
	gcc -o prog 1-compDefinitions.c -L. -l1-compDefinitions
	export LD_LIBRARY_PATH=$(pwd)
	./prog
clear:
	rm -r *.o compileAll rm -r *.so compileAll rm -r *.a compileAll
	
	
