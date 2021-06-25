student-management: main.o add-and-delete.o menu.o print.o
	gcc main.o add-and-delete.o menu.o print.o -o student-management

main.o: main.c
	gcc -c main.c

menu.o: menu.c
	gcc -c menu.c

add-and-delete.o: add-and-delete.c
	gcc -c add-and-delete.c

print.o: print.c
	gcc -c print.c

clean:
	rm -r *.o
	del *.o
	cls
