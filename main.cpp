#include <iostream>
#include <cmath>
#include <string>
#define PI 3.1415
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
		area = PI * raio * raio;
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

void func_espaciais(int indice, int param1, int param2, int param3){

	double area, altura, base, raio, volume, area_b, area_t, apotema, profundidade;

	if(indice == 0){
		base = param1;
		altura = param2;
		area_b = pow(base,2); 
		apotema = sqrt(pow(base/2,2) + pow(altura,2));
		area_t = 4*((base * apotema)/2); 
		area = area_b + area_t;
		volume = (area_b * altura)/3;
		cout << "Area da piramide: " << area << endl;
		cout << "Volume da piramide: " << volume << endl;
	}
	else if(indice == 1){
		base = param1;
		area = 6*(pow(base,2));
		volume = pow(base,3);
		cout << "Area do cubo: " << area << endl;
		cout << "Volume do cubo: " << volume << endl;
		
	}
	else if(indice == 2){
		base = param1;
		altura = param2;
		profundidade = param3;
		area = 2*(altura*profundidade) + 2*(base*altura) + 2*(profundidade*base);
		volume = base*altura*profundidade;
		cout << "Area do paralelepipedo: " << area << endl;
		cout << "Volume do paralelepipedo: " << volume << endl;
		
	}
	else if(indice == 3){
		raio = param1;
		area = 4*PI*pow(raio,2);
		volume = (4/3)*PI*pow(raio,3);
		cout << "Area da esfera: " << area << endl;
		cout << "Volume da esfera: " << volume << endl;
		cout << "pow(raio,e): " << pow(raio,2) << endl;

	}
}

int main(int argc, char *argv[]){ 
	std::string planas[] = {"retangulo","circulo","triangulo","quadrado"};
	std::string espaciais[] = {"piramide", "cubo", "paralelepipedo", "esfera"};
	if(argv[1] == NULL){
		cout << "ERRO: parâmetro inválido!" << endl << endl;
		cout << "As opções de parâmetro são:" << endl << endl;
		cout << "*Figuras Planas: triangulo, retangulo, quadrado ou circulo junto das suas medidas." << endl << endl;
		cout << "*Figuras Espaciais: piramide, cubo, paralelepipedo ou esfera junto das suas medidas." << endl << endl;
		cout << "Ex: ./exe retangulo 5 3" << endl;
		return 0;
	}
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
			break;
			//cout << "Area: "<< *area << endl;
			//cout << "Perimetro: " << *perimetro << endl;
			
		}
		if (!tipo_figura.compare(espaciais[i])){
			func_espaciais(i, param[0], param[1], param[2]);
			break;
			//func_planas(i, param[0], param[1], param[2]);
		}
	}

	delete area;
	delete perimetro;
	delete[] param;
	return 0;
}
