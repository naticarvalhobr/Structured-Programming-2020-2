#include <stdio.h>
#include <locale.h>

#define LIMPA_TELA system("cls");

float final (float *atual, float *reajuste);

int main() {
	
	setlocale(LC_ALL,"Portuguese");

	float atual, reajuste, novo;	
	
	novo = final(&atual, &reajuste);
	
	LIMPA_TELA
	
	printf("Valor original do produto: %.2f\n", atual);
	printf("Novo preço do produto: %.2f\n", novo);
	printf("Reajuste sofrido: %.2f\n", reajuste);
	
	return 0;
}

float final (float *atual, float *reajuste) {
	float novo; // mesmo nome da variável que recebe a função, mas são variáveis diferentes
	
	printf("Insira o preco atual: ");
	scanf("%f", &(*atual));
	fflush(stdin);
	
	printf("Insira a porcentagem do reajuste: ");
	scanf("%f", &(*reajuste));
	fflush(stdin);
	
	novo = *atual + (*reajuste / 100.0);
	
	return novo;
}
