Laboratório 01 - Linguagem de Programação 1

Dupla: Igor Silva Bento e Hilton Thallyson

*Questão 01: 
	-> Como executar o programa: 
		1- Abra o terminal; 
		2- Digite "make -f makefileQ1"; 
		3- Em seguida, './exe <parametro 1> <parametro 2>' para figuras planas, ou com mais parametros, a depender da figura; 
		4- Se for digitado apenas: './exe', ocorrerá um erro e então será mostrado todas as opções;


*Questão 02 - Tarefa 01: 
	-> Como executar o programa:
		1- Abra o terminal; 
		2- Digite "make -f makefileQ2_1"; 
		3- Em seguida, "./exe"; 
		4- Passe um valor em radiano entre -PI e PI;
	
	-> Limitações do programa:	
		1- O resultado de seno e cosseno é mais preciso quando o "valor" digitado pelo usuário é mais próximo de 0, quando o "valor" digitado se aproxima dos extremos(-PI e PI) o resultado fica mais impreciso. Isso ocorre porque a série de Taylor é somatório de vários polinômios que tem como objetivo se aproximar da função Real, quantos mais termos utilizados, mais próximo ao valor real você chegará. 
		
	-> Possiveis soluções:
		1- Criar uma outra função em torno de outro "valor", por exemplo o "x = PI(3.1415...)", ao invés do ponto "x = 0" (na qual a equação das séries de Taylor é dada);
		2- Acrescentar mais termos ao somatório;
	


*Questão 02 - Tarefa 02: 
	-> Como executar o programa: 
		1- Abra o terminal; 
		2- Digite "make -f makefileQ2_2"; 
		3- Em seguida, "./exe"; 
		4- Passe um valor em radiano entre -PI e PI;

	-> Limitações do programa:	
		1- Valores próximos aos limites(-PI e PI) começam a apresentar um distanciamento do valor real
		
	-> Possiveis soluções:
		1- Criar uma outra função em torno de outro valor, por exemplo o "x = PI(3.1415...)", ao invés do ponto "x = 0" (na qual a equação das séries de Taylor é dada); 

	-> Inspeção das condições a-c(GDB):
		O passo a passo é o seguinte:
			1- Abra o terminal;
			2- Digite "make";
			3- Em seguida, digite 'gdb ./exe' para abrir o GDB;
			//Modificar ou nao
			4- Digite "break Q2_2_corpo.cpp:46"(linha de parada do item 'a');
			5- Digite "break Q2_2_corpo.cpp:76"(linha de parada do item 'b');
			6- Digite "break Q2_2_corpo.cpp:105"(linha de parada do item 'c');
			7- Digite "run" para iniciar o programa, então ele irá parar no primeiro "break";
			8- Digite "backtrace full"(imprime o valor do erro do item 'a');
			9- Em seguida, digite 'continue' para ir para o próximo "break";
			10- Digite "backtrace full"(imprime o valor do erro do item 'b');
			11- Em seguida, digite 'continue' para ir para o próximo "break";
			12- Digite "backtrace full"(imprime o valor do erro do item 'c');
			13- Em seguida, digite "continue" chegar ao fim do programa;

	-> Análise do código da Questão 02 - tarefa 2(Profiling - Gprof):
		O passo a passo é o seguinte:
			1- Abra o terminal;
			2- Digite "make";
			3- Em seguida, execute o programa digitando './exe'  para gerar o arquivo gmon.out.
			4- Agora, digite o comando 'gprof --brief -p ./exe' para exibir a tabela com informações referentes a tempo de execução, % de tempo gasto em cada função, quantidade de chamadas das funções, etc. 
			5- Para uma análise mais profunda das chamadas das funções e melhor leitura dos dados, pode-se substituir o comando acima por 'gprof --brief -q ./exe'.
			
	Utilizando o Gprof no programa da tarefa 2 - Questão 2 para x = 3.0, o tempo não foi suficiente para obter dados sobre o tempo de execução de cada função. Entretanto obtivemos dados sobre a quantidade de chamadas de cada função: As funções fatorial e pow foram chamadas 23 vezes. Mas a função fatorial foi chamda adicionamente 177 vezes pelo fato de ser uma função recursiva; A função seno foi chamada apenas 1 vez; Os outro itens se referem a funções do sistema e tem chamada única;
	Assim, podemos concluir que o poder computacional nos permite fazer cálculos imensuráveis de forma muito rápida e na grande maioria das vezes eficaz. No entanto, como vimos acima, o programa possui a limitação citad anteriormente.	
