student-management: main.o add-and-delete.o menu.o
	gcc main.o add-and-delete.o menu.o -o student-management

main.o: main.c
	gcc -c main.c

menu.o: menu.c
	gcc -c menu.c

add-and-delete.o: add-and-delete.c
	gcc -c add-and-delete.c

clean:
	rm -r *.o
	del *.o
	cls
