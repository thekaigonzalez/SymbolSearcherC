all:
	gcc source/main.c -ldl -o bin/ssym.out
	gcc tests/test1.c -fPIC -shared -shared -o bin/testsys.o