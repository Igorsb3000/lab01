#include "Q2_2_cabecalho.h"
using namespace std;

int main(){
	double valor_radiano;
	cout << "Digite um valor (em radianos) de um angulo x, -PI rad <= x <= PI rad: " << endl; 
	cin >> valor_radiano; 
	

	func_seno(valor_radiano);

	return 0;
}
