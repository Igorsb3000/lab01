#include "lab01_Q1_cabecalho.hpp"

void func_planas(double indice, double param1, double param2){
	
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
		area = PI * pow(raio,2);
		perimetro = (2 * PI * raio);
		cout << "Area do circulo: " << area << endl;
		cout << "Perimetro do circulo: " << perimetro << endl;
		
	}
	else if(indice == 2){
		base = param1;
		altura = (param1 * sqrt(3))/2.0;
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
	
}
void func_espaciais(double indice, double param1, double param2, double param3){

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
		area = 4 * PI * pow(raio,2);
		volume = ((4/3.0) * PI * pow(raio,3));
		cout << "Area da esfera: " << area << endl;
		cout << "Volume da esfera: " << volume << endl;
	}
}
