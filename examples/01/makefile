## MAKEFILE ##

CC=gcc
CFLAGS=-I.

cgame: cgame.o 
	$(CC) -o cgame cgame.o

#limpa arquivos nao devem ser mais usados $ make clean
clean:
	rm -rf *.o

#apaga tudo que deve ser modificado $ make mrproper
mrproper: clean
	rm -rf cgame
