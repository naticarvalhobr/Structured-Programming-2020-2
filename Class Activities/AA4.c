#include <stdio.h>
#include <string.h>

#define LIMPA_TELA system("cls")
#define TAM 2

struct cadastro { 
	char nome [100];
	float valor_aluguel;
	int registro;
};

int imprime_menu (int opcao);
void efetuar_cadastro (struct cadastro locatario[], float *somatotal);
void efetuar_pesquisa (struct cadastro locatario[]);
void efetuar_apresentacao (float somatotal);

int main() {
	int opcao, i;
	float somatotal; 
	struct cadastro locatario [TAM]; 
	
	somatotal = 0;
	opcao = 0;
	do{
		if (opcao < 0 || opcao > 3){
			printf("Opcao invalida! Tente novamente!\n\n");
		}
		
		opcao = imprime_menu (opcao);
		
		switch (opcao){
			case 1:
				LIMPA_TELA;
				
				efetuar_cadastro (locatario, &somatotal);
				
                break;
			case 2:
				LIMPA_TELA;
				
				efetuar_pesquisa (locatario); 
				
				break;
			case 3:
				LIMPA_TELA;
				
				efetuar_apresentacao (somatotal);
				
                break;
        }

        LIMPA_TELA;
    } while (opcao != 0);
	
	return 0;
}

int imprime_menu (int opcao) {
	printf("** MENU **\n");
	printf("1. Cadastrar dados de locatario em atraso\n");
	printf("2. Pesquisar locatario nos registros e apresentar seus dados\n");
	printf("3. Apresentar valor total dos alugueis cadastrados em atraso\n");
	printf("0. Sair\n");
		
	printf("Digite a opcao desejada: ");
	scanf("%d", &opcao);
	fflush(stdin);
		
	return opcao;
}

void efetuar_cadastro (struct cadastro locatario[], float *somatotal){
	int i; 
				
	printf("** Cadastro **\n");
	for (i = 0; i < TAM; i++){
		do{
			printf("\nNome completo: ");
			gets(locatario[i].nome);
			if (strlen(locatario[i].nome) == 0){
				printf("Nao e possivel pular esse campo!");
			}
		} while (strlen(locatario[i].nome) == 0);
				
		do{
			printf("Valor do aluguel: ");
			scanf("%f", &locatario[i].valor_aluguel);
			fflush(stdin);
			(*somatotal) = (*somatotal) + locatario[i].valor_aluguel;
			if (locatario[i].valor_aluguel <= 0){
				printf("Opcao invalida!");
			}
		} while (locatario[i].valor_aluguel <= 0);
					
		do {
			printf("Codigo de registro da locacao: ");
			scanf("%d", &locatario[i].registro);
			fflush(stdin);
			if (locatario[i].registro == 0){
				printf("Opcao invalida!");
			}
		} while (locatario[i].registro == 0);
	}
	printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}

void efetuar_pesquisa (struct cadastro locatario[]){
	int chave, aux, i;
	aux = 0;
	
	printf("** Pesquisa **\n");
	printf("Informe o codigo de registro: ");
	scanf("%d", &chave);
	fflush(stdin);
	for (i = 0; i < TAM; i++){
		if (chave == locatario[i].registro){
			printf("Nome: %s\n", locatario[i].nome);
			printf("Valor do aluguel: %.2f\n", locatario[i].valor_aluguel);
			aux = 1;
		} 
	}
				
	if (aux == 0){
		printf("O registro inserido nao foi cadastrado ainda!");
	}
								
	printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}

void efetuar_apresentacao (float somatotal){
	printf("** Apresentacao **\n");
				
	printf("O valor total dos alugueis em atraso e de %.2f reais.", somatotal);
				
	printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}
