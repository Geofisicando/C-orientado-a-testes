all:	main.x
	./main.x

main.x:	main.c liballoc.a
	gcc main.c liballoc.a -lalloc -o main.x

liballoc.a:	_alloc.c _alloc.h
	gcc -c _alloc.c # Compilar código fonte
	ar -rc liballoc.a _alloc.o # Gerar biblioteca
	ranlib liballoc.a # Organizar lista de símbolos

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"

clean:
	rm *.o *.a *.x
