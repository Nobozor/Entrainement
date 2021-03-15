test: main.o polynome.o
	gcc -o test main.o polynome.o -lm

main.o: main.c
	gcc -c main.c -lm

polynome.o: polynome.c
	gcc -c polynome.c -lm
all: test
	
clean:
	rm *.o
	rm test

