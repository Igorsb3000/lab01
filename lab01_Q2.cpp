#include <iostream>
#include <cmath>

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
	int fatorial_3 = fatorial(3);
	int fatorial_5 = fatorial(5);
	cout << pow(radiano,3) << endl;
	cout << pow(radiano,5) << endl;
	cout << fatorial(5) << endl;

	seno = radiano - pow(radiano,3)/fatorial_3 + pow(radiano,5)/fatorial_5;
	cout << "Seno de " << radiano << " : " << seno << endl;

	//Usando a função da biblioteca
	seno = sin(90);
	cout << "Seno da biblioteca de " << radiano << " : " << seno << endl << endl;

}

void func_cosseno(double radiano){
	double cosseno;
	int fatorial_2 = fatorial(2);
	int fatorial_4 = fatorial(4);

	cosseno = 1 - pow(radiano,2)/fatorial_2 + pow(radiano,4)/fatorial_4;
	cout << "Coseno de " << radiano << " : " << cosseno << endl;

	//Usando a função da biblioteca
	cosseno = cos(90);
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
