#Makefile QUESTAO 01

exe:	Q1.o	Q1_corpo.o
	g++	-o	exe	Q1.o	Q1_corpo.o 

Q1.o:	Q1.cpp	Q1.h
	g++	-c	Q1.cpp

Q1_corpo.o:	Q1_corpo.cpp	Q1.h
	g++	-c	Q1_corpo.cpp

clean:
	rm -rf *.o
