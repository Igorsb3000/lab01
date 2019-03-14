#include "Q2_1_cabecalho.h"

double fatorial(int n){
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return n * fatorial(n-1);

	}

}

void func_seno(double radiano){
	double seno;
	//Usando séries de Taylor
	seno = radiano - pow(radiano,3)/fatorial(3) + pow(radiano,5)/fatorial(5);
	cout << "Seno de " << radiano << " : " << seno << endl;

	//Usando a função da biblioteca
	seno = sin(radiano);
	cout << "Seno da cmath " << radiano << " : " << seno << endl << endl;

}

void func_cosseno(double radiano){
	double cosseno;
	//Usando séries de Taylor
	cosseno = 1 - pow(radiano,2)/fatorial(2) + pow(radiano,4)/fatorial(4);
	cout << "Coseno de " << radiano << " : " << cosseno << endl;

	//Usando a função da biblioteca
	cosseno = cos(radiano);
	cout << "Cosseno da cmath " << radiano << " : " << cosseno << endl;

}
