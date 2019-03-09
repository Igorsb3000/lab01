#include "lab01_Q1_cabecalho.hpp"

int main(int argc, char *argv[]){ 
	std::string planas[] = {"retangulo","circulo","triangulo","quadrado"};
	std::string espaciais[] = {"piramide", "cubo", "paralelepipedo", "esfera"};
	if(argv[1] == NULL){
		cout << "ERRO: parâmetro inválido!" << endl << endl;
		cout << "As opções de parâmetro são:" << endl << endl;
		cout << "* Figuras Planas: triangulo, retangulo, quadrado ou circulo junto das suas medidas." << endl << endl;
		cout << "* Figuras Espaciais: piramide, cubo, paralelepipedo ou esfera junto das suas medidas." << endl << endl;
		cout << "Ex: ./exe retangulo 5 3" << endl;
		return 0;
	}
	std::string tipo_figura = argv[1];

	double *param = new double[argc-2];
	int j;
	char existe = 'n';

	for(j=0; j<(argc-2); j++){
		param[j] = strtod(argv[j+2], NULL);
	} 

	for (int i = 0; i < 4; i++){
		if (!tipo_figura.compare(planas[i])) {
			func_planas(i, param[0], param[1]);
			existe = 's';
			break;
			
		}
		if (!tipo_figura.compare(espaciais[i])){
			func_espaciais(i, param[0], param[1], param[2]);
			existe = 's';
			break;
		}
	}
	if (existe == 'n'){
		cout << "A figura escolhida nao existe no banco de dados! Tente novamente." << endl << endl;
		cout << "* Figuras Planas: triangulo, retangulo, quadrado ou circulo." << endl << endl;
		cout << "* Figuras Espaciais: piramide, cubo, paralelepipedo ou esfera." << endl << endl;
	}

	delete[] param;
	return 0;
}
