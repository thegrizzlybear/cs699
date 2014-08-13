all: test.c  final_test.c module.o
	gcc test.c module.o -o test
	gcc final_test.c module.o -o  finale

module.o: module.c module.h
	gcc -c module.c -o module.o
clean:
	rm *.o test finale
