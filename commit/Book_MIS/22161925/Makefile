Book_MIS: main.o command.o book.o
	gcc -o Book_MIS main.o command.o book.o
book.o:book.c book.h
	gcc -c book.c
command.o:command.c command.h
	gcc -c command.c
main.o:main.c
	gcc -c main.c
clean:
	rm *.o
	rm Book_MIS
