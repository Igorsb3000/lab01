#include <iostream>
#include <cmath>

#define PI 3.14159265
using namespace std;

int fatorial(int n){
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

	seno = radiano - pow(radiano,3)/fatorial(3) + pow(radiano,5)/fatorial(5);
	cout << "Seno de " << radiano << " : " << seno << endl;

	//Usando a função da biblioteca
	seno = sin(radiano);
	cout << "Seno da biblioteca de " << radiano << " : " << seno << endl << endl;

}

void func_cosseno(double radiano){
	double cosseno;
	cosseno = 1 - pow(radiano,2)/fatorial(2) + pow(radiano,4)/fatorial(4);
	cout << "Coseno de " << radiano << " : " << cosseno << endl;

	//Usando a função da biblioteca
	cosseno = cos(radiano);
	cout << "Cosseno da biblioteca de " << radiano << " : " << cosseno << endl;

}


int main(){
	double valor_radiano;
	cout << "Digite um valor (em radianos) de um angulo x, -180 rad <= x <= 180 rad: " << endl;
	cin >> valor_radiano;

	func_seno(valor_radiano);
	func_cosseno(valor_radiano);

	return 0;
}
