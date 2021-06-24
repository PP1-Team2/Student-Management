student-management: main.o add-and-delete.o
	gcc main.o add-and-delete.o -o student-management

main.o: main.c
	gcc -c main.c

add-and-delete.o: add-and-delete.c
	gcc -c add-and-delete.c

clean:
	rm -r *.o
	del *.o
	cls
