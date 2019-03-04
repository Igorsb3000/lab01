#include <iostream>
using namespace std;


int MDC(int p, int q){
	int vetor[5]={2, 3, 5, 7, 9};
	int mdc_res = 1;
	if(q == 0)
	{
		return p;

	}
	else if(p == 0)
	{	
		return q;

	}
	else
	{	
		for(int i=0; i<5; i++){
			if((p % vetor[i] == 0) and (q % vetor[i] == 0)){
				mdc_res = mdc_res * vetor[i];
			}

		}
		

	}
	return mdc_res;
}
int main(){
	int p, q, resultado;

	cout << "Digite um inteiro " << endl;
	cin >> p;
	cout << "Digite um inteiro " << endl;
	cin >> q;

	resultado = MDC(p, q);

	cout << "O MDC de " << p << " e "<< q << " eh: "<< resultado << endl;

	return 0;
}
