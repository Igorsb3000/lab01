#include "Q2_1_cabecalho.h"
using namespace std;

int main(){
	double valor_radiano;
	cout << "Digite um valor (em radianos) de um angulo x, -PI <= x <= PI " << endl;
	cin >> valor_radiano;
	cout << endl;

	func_seno(valor_radiano);
	func_cosseno(valor_radiano);

	return 0;
}
