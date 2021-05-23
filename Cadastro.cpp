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
    printf("\t Sistema Loja de C�mbio\n");
    printf("\t Escolha uma das op��es abaixo\n");
    printf("__\n");
    printf("	1 - Cadastro \n");
    printf("	2 - Relat�rio\n ");
    printf("	3 - Sair \n");
    printf("Qual op��o deseja acessar? ");
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
	
	printf("Escolha o relat�rio que deseja \n");
	printf(" 1 - Lista de opera��es \n");
	printf(" 2 - valor total das opera��es \n");
	printf(" 3 - valor total das taxas cobradas \n");
	printf(" 4 - Relat�rio por tempo \n");
	printf(" 5 - Relat�rio por cliente \n");
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

/* RELAT�RIOS */
void listaOperacoes() {
	printf("====================================");
	printf("    RELAT�RIO LISTA DE OPERA��ES   \n");
	
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
	printf("    RELAT�RIO TOTAL DE OPERA��ES    ");
		
		totalOperacao = totalOperacao + oper.valorConvertido;
		
	printf("Valor Total da Opera�o�es :  %.2f \n ",  oper.valorConvertido);
}

void valorTotalTaxas() {
	printf("================================");
	printf("    RELAT�RIO TOTAL DE TAXAS    \n");
	
		oper.valorOriginal = oper.valorOriginal * .10;
		
	printf("\n Valor Total de Taxas:  %.2f", oper.valorOriginal);
}

void operacoesTempo() {
	printf("========================================");
	printf("    RELAT�RIO DE OPERA��ES POR TEMPO    ");
	
	}

void operacoesCliente() {
		
	printf("==========================================");
	printf("    RELAT�RIO DE OPERA��ES POR CLIENTE    ");
	
		printf("%s \n", oper.nome );
		printf("%s \n", oper.moedaOrigem  );
		printf("%s \n", oper.moedaDestino );
		printf("%s \n", oper.dataOperacao );
		printf("%.2f \n", oper.valorOriginal );
		printf("%.2f \n", oper.valorConvertido );
	
}
