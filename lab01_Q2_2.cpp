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
	double seno = 0;
	double erro = 1;
	int k=0, N=0;
	do{
		seno = seno + (pow(-1,k)*pow(radiano,1+2*k))/fatorial(1+2*k);
		cout << "seno: " << seno << endl;
		erro = seno - sin(radiano);
		if(erro < 0){
			erro = erro*(-1);
		}
		cout << erro << endl;
		N++;
		k++;
	}while (erro > 0.0001 );

	cout << "Seno de " << radiano << " : " << seno << endl;
	cout << "erro: " << erro << "." << endl;
	cout << "N: " << N << "." << endl;
	//Usando a função da biblioteca
	seno = sin(radiano);
	cout << "Seno da biblioteca de " << radiano << " : " << seno << endl << endl;

}


int main(){
	double valor_radiano;
	cout << "Digite um valor (em radianos) de um angulo x, -180 rad <= x <= 180 rad: " << endl;
	cin >> valor_radiano;

	func_seno(valor_radiano);

	return 0;
}
