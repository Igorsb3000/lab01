#include "Q2_2_cabecalho.h"
using namespace std;

int main(){
	double valor_radiano;
	cout << "Digite um valor (em radianos) de um angulo x, -PI rad <= x <= PI rad: " << endl; 
	cin >> valor_radiano; 
	/*
	for(int i=0; i < 2000;i++){
		func_seno(valor_radiano);
	}*/
	//Podemos substituir o bloco abaixo pelo de cima caso queira testar o tempo de execução de cada função e entrar com o valor de radiano próximo dos limites -PI ou PI.
	func_seno(valor_radiano);

	return 0;
}
