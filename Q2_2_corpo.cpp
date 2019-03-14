#include "Q2_2_cabecalho.h"
//Função fatorial para auxiliar nas séries de Taylor
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

//Função Seno de acordo com as séries de Taylor
void func_seno(double radiano){
	double seno = 0;
	long double erro = 1; //Para caber mais casas decimais do erro
	int k=0, N=0;

	cout << "Caso A" << endl << endl; 
	do{
		seno = seno + (pow(-1,k)*pow(radiano,1+2*k))/fatorial(1+2*k);
		cout << "seno A: " << seno << endl;
		//cout << "sin(A): " << sin(radiano) << endl; //Apenas para conferir os resultados manualmente
		erro = seno - sin(radiano);

		//Caso o erro for < 0, então multiplicamos por -1 para garantir que não terá numero negativo
		if(erro < 0){
			erro = erro*(-1);
		} 
		cout << erro << endl;
		N++;
		k++;
	}while (erro > 0.0001 );
	cout << endl;
	//Caso em que o erro é < a)0.0001
	cout << "Resultados caso A:" << endl << endl;
	cout << "Seno de " << radiano << " : " << seno << endl;
	cout << "erro: " << erro << "." << endl;
	cout << "N: " << N << "." << endl;

	//Usando a função da biblioteca
	seno = sin(radiano);
	cout << "Seno da biblioteca de " << radiano << " : " << seno << endl << endl;

	
	N = 0;
	k = 0;
	seno = 0;


	cout << "Caso B" << endl << endl; 
	do{
		seno = seno + (pow(-1,k)*pow(radiano,1+2*k))/fatorial(1+2*k);
		cout << "seno B: " << seno << endl;
		//cout << "sin(B): " << sin(radiano) << endl; //Apenas para conferir os resultados manualmente
		erro = seno - sin(radiano);
		//Caso o erro for < 0, então multiplicamos por -1 para garantir que não terá numero negativo
		if(erro < 0){
			erro = erro*(-1);
		}
		cout << erro << endl;
		N++;
		k++;
	}while (erro > 0.00001 );
	cout << endl;
	//Caso em que o erro é < b)0.00001
	cout << "Resultados caso B:" << endl << endl;
	cout << "Seno de " << radiano << " : " << seno << endl;
	cout << "erro: " << erro << "." << endl;
	cout << "N: " << N << "." << endl;
	//Usando a função da biblioteca
	seno = sin(radiano);
	cout << "Seno da biblioteca de " << radiano << " : " << seno << endl << endl;

	N = 0;
	k = 0;
	seno = 0;


	cout << "Caso C" << endl << endl; 
	do{
		seno = seno + (pow(-1,k)*pow(radiano,1+2*k))/fatorial(1+2*k);
		cout << "seno C: " << seno << endl;
		//cout << "sin(C): " << sin(radiano) << endl; //Apenas para conferir os resultados manualmente
		erro = seno - sin(radiano);
		//Caso o erro for < 0, então multiplicamos por -1 para garantir que não terá numero negativo
		if(erro < 0){
			erro = erro*(-1);
		}
		cout << erro << endl;
		N++;
		k++;
	}while (erro > 0.000001 );
	cout << endl;
	//Caso em que o erro é < c)0.000001
	cout << "Resultados caso C:" << endl << endl;
	cout << "Seno de " << radiano << " : " << seno << endl;
	cout << "erro: " << erro << "." << endl;
	cout << "N: " << N << "." << endl;
	//Usando a função da biblioteca
	seno = sin(radiano);
	cout << "Seno da biblioteca de " << radiano << " : " << seno << endl << endl;

}

