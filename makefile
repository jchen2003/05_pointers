all: test.o
	gcc -o pointers test.o

test.o :
	gcc -c test.c

run:
	./pointers

clean:
	rm *.o