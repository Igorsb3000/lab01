Laboratório 01 - Linguagem de Programação 1

Dupla: Igor Silva Bento e Hilton Thallyson

Questão 01: 
	Como compilar: 
		1- Abra o terminal; 
		2- Digite 'make'; 
		3- Em seguida, './exe <parametro 1> <parametro 2>' para figuras planas, ou com mais parametros, a depender da figura; 
		4- Se for digitado apenas: './exe', ocorrerá um erro e então será mostrado todas as opções;

Questão 02:
	Como compilar:
		1- Abra o terminal;
		2- Digite "make";
		3- Em seguida, "./exe";
		4- Passe um grau em radiano entre -PI e PI;
	
	Limitações do programa:	
		1- O número máximo do N é ligado a máxima representação numérica da máquina;
		2- Valores próximos a 3.1415... vão dar overflow no fatorial, então aparecerá na tela o "-nan";

	Possiveis soluções:
		1- Se estiver em uma máquina 32 bits, ir para uma que seja 64 bits;
		2- Criar uma função em torno de outro valor, por exemplo o x=PI(3.1415...), ao invés do ponto x=0(na qual a equação das séries de Taylor é dada); 
	
	Inspeção das condições a-c(GDB):
		O passo a passo é o seguinte:
			1- Abra o terminal;
			2- Digite "make";
			3- Em seguida, digite 'gdb ./exe' para abrir o GDB;
			4- Digite "break 42"(linha de parada do item 'a');
			5- Digite "break 63"(linha de parada do item 'b');
			6- Digite "break 84"(linha de parada do item 'c');
			7- Digite "run" para iniciar o programa, então ele irá parar no primeiro "break";
			8- Digite "backtrace full"(imprime o valor do erro do item 'a');
			9- Em seguida, digite 'continue' para ir para o próximo "break";
			10- Digite "backtrace full"(imprime o valor do erro do item 'b');
			11- Em seguida, digite 'continue' para ir para o próximo "break";
			12- Digite "backtrace full"(imprime o valor do erro do item 'c');
			13- Em seguida, digite "continue" chegar ao fim do programa;

	
