run:
	./prog
compile prog: main.o sheet.o
	gcc `pkg-config --cflags gtk+-3.0` -o prog main.o sheet.o `pkg-config --libs gtk+-3.0` -Wall -Wextra -g
main.o: main.c sheet.h
	gcc -c main.c sheet.h
sheet.o: sheet.c
	gcc -c sheet.c
clean:
	rm -f prog
	rm -f *.o
