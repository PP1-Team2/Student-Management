student-management: main.o add-and-delete.o menu.o print.o all-structs.o parsing.o sort.o
	gcc main.o add-and-delete.o menu.o print.o all-structs.o parsing.o sort.o -o student-management

main.o: main.c
	gcc -c main.c

menu.o: menu.c
	gcc -c menu.c

add-and-delete.o: add-and-delete.c
	gcc -c add-and-delete.c

print.o: print.c
	gcc -c print.c

all-structs.o: all-structs.c
	gcc -c all-structs.c

parsing.o: parsing.c
	gcc -c parsing.c

sort.o: sort.c
	gcc -c sort.c

clean:
	rm -r *.o
	del *.o
	cls
