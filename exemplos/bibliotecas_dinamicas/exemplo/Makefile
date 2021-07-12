all:	main.x
	LD_LIBRARY_PATH=$$PWD && ./main.x

main.x:	main.c liballoc.so
	gcc main.c liballoc.so -o main.x

liballoc.so:	_alloc.c _alloc.h
	gcc -c -fPIC _alloc.c -o liballoc.o # Compilar código fonte
	gcc -shared -o liballoc.so liballoc.o # Gerar biblioteca

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"

clean:
	rm *.o *.so *.x
