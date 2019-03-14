Laboratório 01 - Linguagem de Programação 1

Dupla: Igor Silva Bento e Hilton Thallyson

*Questão 01: 
	-> Como executar o programa: 
		1- Abra o terminal; 
		2- Digite 'make'; 
		3- Em seguida, './exe <parametro 1> <parametro 2>' para figuras planas, ou com mais parametros, a depender da figura; 
		4- Se for digitado apenas: './exe', ocorrerá um erro e então será mostrado todas as opções;


*Questão 02 - Tarefa 01: 
	-> Como executar o programa:
		1- Abra o terminal; 
		2- Digite "make"; 
		3- Em seguida, "./exe"; 
		4- Passe um valor em radiano entre -PI e PI;
	
	-> Limitações do programa:	
		1- O resultado de seno e cosseno é mais preciso quando o "valor" digitado pelo usuário é mais próximo de 0, quando o "valor" digitado se aproxima dos extremos(-PI e PI) o resultado fica mais impreciso. 
	-> Possiveis soluções:
		1- Criar uma outra função em torno de outro "valor", por exemplo o "x = PI(3.1415...)", ao invés do ponto "x = 0" (na qual a equação das séries de Taylor é dada); 
	


*Questão 02 - Tarefa 02: 
	-> Como executar o programa: 
		1- Abra o terminal; 
		2- Digite "make"; 
		3- Em seguida, "./exe"; 
		4- Passe um valor em radiano entre -PI e PI;

	-> Limitações do programa:	
		1- O número máximo do N é ligado a máxima representação numérica da máquina, variando conforme a arquitetura da máquina (32bits ou 64bits);
		2- Valores próximos a 3.1415... vão dar overflow no fatorial, então aparecerá na tela o "-nan";

	-> Possiveis soluções:
		1- Se estiver em uma máquina 32 bits, ir para uma que seja 64 bits;
		2- Criar uma outra função em torno de outro valor, por exemplo o "x = PI(3.1415...)", ao invés do ponto "x = 0" (na qual a equação das séries de Taylor é dada); 

	-> Inspeção das condições a-c(GDB):
		O passo a passo é o seguinte:
			1- Abra o terminal;
			2- Digite "make";
			3- Em seguida, digite 'gdb ./exe' para abrir o GDB;
			4- Digite "break Q2_2_corpo.cpp:37"(linha de parada do item 'a');
			5- Digite "break Q2_2_corpo.cpp:63"(linha de parada do item 'b');
			6- Digite "break Q2_2_corpo.cpp:88"(linha de parada do item 'c');
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

Resultados da inspeção utilizando o Gprof:
	Utilizando o Gprof no programa da tarefa 2 - Questão 2 para x = 3.14(PI), não foi possível obter quase dados, pois foi executado de forma muito rápida, assim os dados que obtemos foram: 
	1- O tempo gasto pela função "fatorial" foi de 100%, então todas as outras obtiveram 0%;
	2- O tempo gasto por todas as funções do programa foi de 0.01 segundos; 
	3- A quantidade de tempo total gasto por cada função foi a seguinte: 0.01 secundos e 0.00 segundos para todas as demais; 
	4- A quantidade de vezes que cada função foi chamada variou, sendo: 312 chamados para a função "fatorial", 312 para "gnu_cxx" - gdb e 312 para a função "pow da biblioteca cmath";
	5- A quantidade média em ms/chamada gasta por cada função separadamente foi de: 0.03 para função "fatorial" e 0.00 para as outras; 
	6- Já a quantidade média em ms/chamada gasta por cada função e suas subrotinas foi de: 0.03 para função "fatorial", 10.01 para a função "func_seno" e todas as outras obtiveram 0.00, o que é de se esperar pois a função "fatorial" está sendo chamada dentro da "func_seno"  em loop.
	Contudo, não foi possível obter as informações de tempo de cada função, pois o programa foi executado muito rápido para gerar dados para o gprof. Para verificar qual foi a % de tempo gasto em cada função, foi necessário chamar a função 'func_seno' várias vezes, entre 1000-2000 e utilizar valores de entrada próximos aos extremos -pi e pi para que o Gprof gerasse dados suficientes de tempo gasto. 
	Então para termos mais dados com que trabalharmos, adicionamos um loop do tipo 'for' no main do nosso programa, de modo que ele chamasse a função "func_seno" 2000 vezes. Dessa forma, utilizando o Gprof no programa da tarefa 2 - Questão 2 para x = 3.14(PI), de acordo com a modificação descrita acima, obtivemos:
	1- O tempo gasto pela função "fatorial" foi de 95.08%, o da "func_seno" foi de 3.91% e da "main" foi de 1.12%;
	2- O tempo total gasto por todas as funções juntas foi de 3.58 segundos;
	3- A quantidade de tempo total gasto por cada função foi a seguinte: 3.40s da função "fatorial", 0.14s da função "func_seno", 0.04s da função "main" e 0.00s para as demais; 
	4- A quantidade de vezes que cada função foi chamada também foi alterada, ficando com 624000 chamadas para a função "fatorial", 2000 chamadas para função "func_seno", 1 chamada para a função "main", 624000 para função "gnu_cxx" e 624000 para função "pow da biblioteca cmath" ;
	5- A quantidade média em ms/chamada gasta por cada função separadamente foi de: 0.01 para a função "fatorial", 0.07 para a função "func_seno" e 40.04 para a função "main";
	6- A quantidade média em ms/chamada gasta por cada função e suas subrotinas foi de: 0.01 para a função "fatorial", 1.77 para a função "func_seno" e 40.04 para a função "main".
	
	Assim, podemos concluir que o poder computacional nos permite fazer cálculos imensuráveis de forma muito rápida e na grande maioria das vezes eficaz. No entanto, como vimos acima, o programa possui sim certas limitações. Comparandos as duas execuções do gprof e seus respectivos dados observados, podemos ter noção de quanto os 'laços' são importantes e fazem grande diferença no tempo de execução dos programas.	
