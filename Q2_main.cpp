#include "Q2.h"
using namespace std;
//Possiveis soluções, colcoar no README.md: 
// 1- Se estiver num 32 bits ir para um 64 bits
// 2 - Noa pode alnçar N por causa da limitação do computador
// 3 - Achar o N maximo para (É o N=7)

int main(){
	double valor_radiano;
	cout << "Digite um valor (em radianos) de um angulo x, -PI rad <= x <= PI rad: " << endl;
	cin >> valor_radiano;
	
	/*for(int i=0; i < 2000;i++){
		func_seno(valor_radiano);
	}*/
	// substituir o bloco acima pelo de baixo caso queira testar o tempo de execução de cada função e entrar com o valor de radiano próximo dos limites -PI ou PI.
	func_seno(valor_radiano);

	return 0;
}
