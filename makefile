.PHONY: run compile clean
run:
	./prog
compile prog: main.o
	gcc -o prog main.o -Wall
main.o: main.c
	gcc -c main.c
clean:
	rm -f prog
	rm -f *.o
