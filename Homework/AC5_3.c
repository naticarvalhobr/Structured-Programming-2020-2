#include <stdio.h>
#include <locale.h>
#include <string.h>

#define LIMPA_TELA system("cls");

struct dados {
	char nome [50];
	float notas [4];
};

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	struct dados aluno; 
	int i, soma;
	float media;
	soma = 0;
	
	printf("\nDigite seu nome completo: ");
	gets(aluno.nome);

	for (i=0; i < 4; i++) {
		printf("Digite sua nota parcial %i: ", i+1);
		scanf("%f", &aluno.notas[i]);
		soma = soma + aluno.notas[i];
	}
	
	media = soma / 4.00;
	
	LIMPA_TELA
	
	printf("Nome completo: %s\n", aluno.nome);
	
	for (i = 0; i < 4; i++) {
		printf("Nota parcial %i: %.2f\n", i+1, aluno.notas[i]);
	}
	
	printf("Media aritmetica: %.2f", media);
	
	return 0;
}
