#Makefile QUESTAO 01

all:	exe

exe:	lab01_Q1.o	lab01_Q1_corpo.o
	g++	-o  exe	lab01_Q1.o	lab01_Q1_corpo.o 

lab01_Q1.o:	lab01_Q1.cpp	lab01_Q1_cabecalho.hpp
	g++ -c  lab01_Q1.cpp	-Wall -ansi -pedantic -g -O0

lab01_Q1_corpo.o:	lab01_Q1_corpo.cpp	lab01_Q1_cabecalho.hpp
	g++ -c  lab01_Q1_corpo.cpp	-Wall -ansi -pedantic -g -O0

clean:
	rm	-rf	*.o
