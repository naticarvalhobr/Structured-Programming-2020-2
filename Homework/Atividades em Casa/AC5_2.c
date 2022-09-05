#include <stdio.h>
#include <locale.h>
#include <string.h>

#define LIMPA_TELA system("cls");

struct cadastro {
	char nome[50];
    char endereco[100];
    char sexo;
    char data_de_nascimento[10];
    float salario;
    char rg[15];
};


int main() {
	
	struct cadastro ficha;
	
	printf("Seja bem-vindo!\n");
	printf("Insira seus dados nos campos abaixo:\n");
	
	do {
		printf("\nNome: ");
		gets(ficha.nome);
		if (strlen(ficha.nome) = 0) {
			printf("Nao e possivel pular esse campo!");
		}
	} while (strlen(ficha.nome) = 0);
	
	do{
		printf("\nEndereco: ");
		gets(ficha.endereco);
		if (strlen(ficha.endereco) = 0) {
			printf("Nao e possivel pular esse campo!");
		}
	} while (strlen(ficha.endereco) = 0);
		
	do{
		printf("\nSexo(F/M): ");
		scanf("%c", &ficha.sexo);
		ficha.sexo = toupper (ficha.sexo);
		getchar();
		if ((ficha.sexo != 'F') && (ficha.sexo != 'M')){
			printf("Opcao invalida!\n");
		}	
	} while ((ficha.sexo != 'F') && (ficha.sexo != 'M'));
	
	do {
		printf("\nData de nascimento: ");
		gets(ficha.data_de_nascimento);
		if (strlen(ficha.data_de_nascimento) = 0){
			printf("Nao e possivel pular esse campo!");
		}
	} while (strlen(ficha.data_de_nascimento) = 0);
		
	do{
		printf("\nSalario: ");
		scanf("%f", &ficha.salario);
		getchar();
		if (ficha.salario < 0) {
			printf("Opcao invalida!\n");
		}
	} while (ficha.salario < 0); 
	
	do{
		printf("\nRG: ");
		gets(ficha.rg);
		if (strlen(ficha.rg) = 0) {
			printf("Nao e possivel pular esse campo!");
		}
	} while (strlen(ficha.rg) = 0);
	
	LIMPA_TELA
	
	printf("Nome: %s\n", ficha.nome);
    printf("Endereco: %s\n", ficha.endereco);
    printf("Sexo: %c\n", ficha.sexo);
    printf("Data de nascimento: %s\n", ficha.data_de_nascimento);
    printf("Salario: %.2f\n", ficha.salario);
    printf("Numero do RG: %s\n", ficha.rg);
	
	return 0;
}
