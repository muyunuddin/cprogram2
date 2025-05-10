math.exe:main.o small.o big3.o
	gcc -o math.exe main.o small.o big3.o
main.o:main.c
	gcc -c main.c
small.o:small.c
	gcc -c small.c
big3.o:big3.c
	gcc -c big3.c
