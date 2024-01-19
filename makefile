run:
	./prog
compile prog: main.o sheet.o
	gcc -o prog main.o sheet.o -Wall -Wextra -g
main.o: main.c sheet.h
	gcc -c main.c sheet.h
sheet.o: sheet.c
	gcc -c sheet.c
clean:
	rm -f prog
	rm -f *.o
