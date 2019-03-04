#include <iostream>
#include <cmath>
#include <string>
#define PI 3.14
using namespace std;

void func_planas(int indice, int param1, int param2){ //, int *area_result, int *perimetro_result
	
	double area, altura, base, perimetro, raio;

	if(indice == 0){
		base = param1;
		altura = param2;
		area = base * altura;
		perimetro = 2 * (base + altura);
		cout << "Area do retangulo: " << area << endl;
		cout << "Perimetro do retangulo: " << perimetro << endl;
		

	}
	else if(indice == 1){
		raio = param1;
		area = PI * raio;
		perimetro = (2 * PI * raio);
		cout << "Area do circulo: " << area << endl;
		cout << "Perimetro do circulo: " << perimetro << endl;
		
	}
	else if(indice == 2){
		base = param1;
		altura = param2;
		area = (base * altura)/2;
		perimetro = base + base + base;
		cout << "Area do triangulo: " << area << endl;
		cout << "Perimetro do triangulo: " << perimetro << endl;
		
	}
	else if(indice == 3){
		base = param1;
		area = base * base;
		perimetro = 4 * base;
		cout << "Area do quadrado: " << area << endl;
		cout << "Perimetro do quadrado: " << perimetro << endl;

	}
	//*area_result = area;
	//*perimetro_result = perimetro;
	
	
}

void func_espaciais(int i){
	

}

int main(int argc, char *argv[]){ 
	std::string planas[] = {"retangulo","circulo","triangulo","quadrado"};
	std::string espaciais[] = {"piramide", "cubo", "paralelepipedo", "esfera"};
	std::string tipo_figura = argv[1];
	//cout << argc << endl;
	int *area = new int; 
	int *perimetro = new int;

	//Poderia utilizar um vetor para receber a quantidade exata de argumentos, tava dando falha de segmentação
	int *param = new int[argc-2];
	int j;
	for(j=0; j<(argc-2); j++){
		param[j] = atoi(argv[j+2]);
	} 


	for (int i = 0; i < 4; i++){
		if (!tipo_figura.compare(planas[i])) {
			func_planas(i, param[0], param[1]); //, area, perimetro

			//cout << "Area: "<< *area << endl;
			//cout << "Perimetro: " << *perimetro << endl;
			
		}
		if (!tipo_figura.compare(espaciais[i])){
			func_planas(i, param[0], param[1], param[2]);
		}
	}

	delete area;
	delete perimetro;
	delete[] param;
	return 0;
}
