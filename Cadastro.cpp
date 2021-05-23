#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

/* ESTRUTURA DE OPERACOES */
typedef struct operacao{
	char nome[20];
	char moedaOrigem[20];
	char moedaDestino[20];
	char dataOperacao[20];
	float valorOriginal; 
	float valorConvertido; 
} Operacao;

typedef struct moeda{
	char moeda;
} Moeda;

/* DECLARACAO DOS PROCEDIMENTOS / FUNCTIONS */
void menu();
void menuRelatorio();
void cadastrarOperacao();
void listaOperacoes();
void valorTotalOperacoes();
void valorTotalTaxas();
void operacoesTempo();
void operacoesCliente();

float taxa = 0.10;
Operacao oper ;

main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
}

void menu() { 
	int opcaoMenu;
    system("cls");
    printf("\t Sistema Loja de Câmbio\n");
    printf("\t Escolha uma das opções abaixo\n");
    printf("__\n");
    printf("	1 - Cadastro \n");
    printf("	2 - Relatório\n ");
    printf("	3 - Sair \n");
    printf("Qual opção deseja acessar? ");
    scanf("%d", &opcaoMenu);
    while(opcaoMenu != 3) {
        switch(opcaoMenu){
            case 1: 
                cadastrarOperacao();
                break;
            case 2: {
                menuRelatorio();
                break;
            }
            case 3: {
                exit(0);
            }
        }
    }
}

void menuRelatorio() {
	int opcaoRelat;
	
	printf("Escolha o relatório que deseja \n");
	printf(" 1 - Lista de operações \n");
	printf(" 2 - valor total das operações \n");
	printf(" 3 - valor total das taxas cobradas \n");
	printf(" 4 - Relatório por tempo \n");
	printf(" 5 - Relatório por cliente \n");
	scanf("%d", &opcaoRelat);
	
	switch(opcaoRelat) {
		case 1: {
			listaOperacoes();
			break;
		}
		case 2: {
			valorTotalOperacoes();
			break;
		}
		case 3: {
			valorTotalTaxas();
			break;
		}
		case 4: {
			operacoesTempo();
			break;
		}
		case 5: {
			operacoesCliente();
			break;
		}
	}
				
	system("pause");
}

void cadastrarOperacao() {
	int opcaoSair;
	
		system("cls");
		
		printf("Insira o nome do cliente:  \n");
		gets(oper.nome);
		printf("Insira a moeda de origem : \n");
		scanf("%s", &oper.moedaOrigem);
		printf("Insira a moeda de destino:  \n");
		scanf("%s", &oper.moedaDestino);
		printf("Insira a data: \n");
		scanf("%s", &oper.dataOperacao);
		printf("Insira o valor original: \n");
		scanf("%f", &oper.valorOriginal);
		printf("Insira o valor convertido: \n");
		scanf("%f", &oper.valorConvertido);
		printf("taxa cobrada: 10% \n");
	
		menu();

}

/* RELATÓRIOS */
void listaOperacoes() {
	printf("====================================");
	printf("    RELATÓRIO LISTA DE OPERAÇÕES   \n");
	
		printf("%s \n", oper.nome );
		printf("%s \n", oper.moedaOrigem  );
		printf("%s \n", oper.moedaDestino );
		printf("%s \n", oper.dataOperacao );
		printf("%.2f \n", oper.valorOriginal );
		printf("%.2f \n", oper.valorConvertido );
}

void valorTotalOperacoes() {
	float totalOperacao, i;
	
	printf("====================================");
	printf("    RELATÓRIO TOTAL DE OPERAÇÕES    ");
		
		totalOperacao = totalOperacao + oper.valorConvertido;
		
	printf("Valor Total da Operaçoões :  %.2f \n ",  oper.valorConvertido);
}

void valorTotalTaxas() {
	printf("================================");
	printf("    RELATÓRIO TOTAL DE TAXAS    \n");
	
		oper.valorOriginal = oper.valorOriginal * .10;
		
	printf("\n Valor Total de Taxas:  %.2f", oper.valorOriginal);
}

void operacoesTempo() {
	printf("========================================");
	printf("    RELATÓRIO DE OPERAÇÕES POR TEMPO    ");
	
	}

void operacoesCliente() {
		
	printf("==========================================");
	printf("    RELATÓRIO DE OPERAÇÕES POR CLIENTE    ");
	
		printf("%s \n", oper.nome );
		printf("%s \n", oper.moedaOrigem  );
		printf("%s \n", oper.moedaDestino );
		printf("%s \n", oper.dataOperacao );
		printf("%.2f \n", oper.valorOriginal );
		printf("%.2f \n", oper.valorConvertido );
	
}
