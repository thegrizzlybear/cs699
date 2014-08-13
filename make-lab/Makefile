all: test.c module.o
	gcc test.c module.o -o test

module.o: module.c module.h
	gcc -c module.c -o module.o
clean:
	rm *.o test
