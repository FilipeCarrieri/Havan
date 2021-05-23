# Havan
Sistema gerenciador de operações
    O sistema foi desenvolvido em linguagem C++ no DEVC++ com compilador TDM-GCC 4.9.2 64-BIT RELEASE.
    
    Na primeira parte ao iniciar o sistema temos 3 opções de escolha, como o descrito abaixo:
    Sistema Loja de Câmbio
    Escolha uma das opções abaixo
   
   	1 - Cadastro 
    2 - Relatório
    3 - Sair 
    Qual opção deseja acessar?
    opcaoMenu
    
	Nesse menu temos os relatórios disponíveis.
	Escolha o relatório que deseja 
	1 - Lista de operações 
	2 - valor total das operações 
	3 - valor total das taxas cobradas 
	4 - Relatório por tempo 
	5 - Relatório por cliente 
	opcaoRelat

	
  No primeiro menu ao escolher a opção 1 o sistema encaminha para essa parte onde será feito o cadastro da operação feita pelo cliente.
    cadastrarOperacao
		Insira o nome do cliente:  
	  oper.nome
		Insira a moeda de origem
		oper.moedaOrigem
		Insira a moeda de destino:  
		oper.moedaDestino
		Insira a data
		oper.dataOperacao);
		Insira o valor original
		oper.valorOriginal
		Insira o valor convertido: 
		oper.valorConvertido
		taxa cobrada: 10% 
	


/* RELATÓRIOS */
No segundo menu temos 5 opções de escolha, no primeiro temos tomas as operações feitas.

RELATÓRIO LISTA DE OPERAÇÕES   
	
		oper.nome 
		oper.moedaOrigem  
	  oper.moedaDestino 
		oper.dataOperacao 
		oper.valorOriginal 
		oper.valorConvertido 


	
	
RELATÓRIO TOTAL DE OPERAÇÕES    
Na opção 2 temos a soma de valores de todas operações feitas.

		totalOperacao = totalOperacao + oper.valorConvertido
		
	Valor Total da Operaçoões :  %.2f ,  oper.valorConvertido



	
	RELATÓRIO TOTAL DE TAXAS  
  Na opção 3 temos o valor total das taxas cobrada nas operações.
	
		oper.valorOriginal = oper.valorOriginal * .10
		
Valor Total de Taxas:  %.2f, oper.valorOriginal



	RELATÓRIO DE OPERAÇÕES POR CLIENTE 
	Na 5 opção temos as operações feita por cada cliente separado.
		oper.nome 
		oper.moedaOrigem  
		oper.moedaDestino 
		oper.dataOperacao 
		oper.valorOriginal 
		oper.valorConvertido 
	
