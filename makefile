#Makefile QUESTAO 01

exe:	lab01_Q1.o	lab01_Q1_corpo.o
	g++	-o	exe	lab01_Q1.o	lab01_Q1_corpo.o -Wall -ansi -pedantic

lab01_Q1.o:	lab01_Q1.cpp	lab01_Q1_cabecalho.hpp
	g++	-c	lab01_Q1.cpp -Wall -ansi -pedantic

lab01_Q1_corpo.o:	lab01_Q1_corpo.cpp	lab01_Q1_cabecalho.hpp
	g++	-c	lab01_Q1_corpo.cpp -Wall -ansi -pedantic

clean:
	rm -rf *.o
