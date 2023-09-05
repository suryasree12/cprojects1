ABC.exe:main.o add.o fact.o pali.o
	gcc -o ABC.exe main.o add.o fact.o pali.o
main.o:main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c
fact.o:fact.c
	gcc -c fact.c
pali.o:pali.c
	gcc -c pali.c
clean:
	rm -rf *.o
