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
	
	Inspeção das condições a-c(Profiling - Gprof):
		O passo a passo é o seguinte:
			1- Abra o terminal;
			2- Digite "make";
			3- Em seguida, execute o programa digitando './exe'  para gerar o arquivo gmon.out.
			4- Agora, digite o comando 'gprof --brief -p ./exe' para exibir a tabela com informações referentes a tempo de execução, % de tempo gasto em cada função, quantidade de chamadas das 			funções, etc. 
			5- Para uma análise mais profunda das chamadas das funções e melhor leitura dos dados, pode-se substituir o comando acima por 'gprof --brief -q ./exe'.
	
	Resultados da inspeção utilizando o Gprof:
		Foi possível notar que as funções foram chamadas de acordo com o esperado. A função 'func_seno' foi chamada apenas uma vez pela função 'main' e as funções 'pow' e 'fatorial' foram chamadas 		mais vezes. Nota-se que a função 'fatorial' foi chamada também recursivamente, o que aumentou ainda mais o número de chamadas.
		Contudo, não foi possível obter as informações de tempo de cada função, pois o programa foi executado muito rápido para gerar dados para o gprof. Para verificar qual foi a % de 		tempo gasto em cada função, foi necessário chamar a função 'func_seno' várias vezes, entre 1000-2000 e utilizar valores de entrada próximos aos extremos -pi e pi para que o Gprof gerasse dados 	 suficientes de tempo gasto.
		Como resultado, notou-se que a função 'fatorial' teve a maior contribuição em tempo de execução. No caso em que foram chamadas 2000 vezes a função 'func_seno', verificou-se que a função 	  'fatorial' foi responsável por 94.28% do tempo total, que é coerente com o fato de que essa função é recursiva. Em segundo luga ficou a função 'func_seno' com 5.29% do tempo total, pois foi 		chamada 2000 vezes neste teste.
		O tempo total de execução foi de 2.08 segundos, destes, 1.97s foram gastos na função 'fatorial' e 0,11s na função 'func_seno'. As demais funções não obtiveram tempo suficiente para serem 		registrados pelo gprof.		

	
