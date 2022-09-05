#include <stdio.h>

int main() {
	
	int vetor[100], qtd, i, j, troca;
	
	printf("Insira a qtd de elementos: ");
	scanf("%d", &qtd);
	
	for (i = 0; i < qtd; i++) {
		printf("Insira o inteiro %d: ", i+1);
		scanf("%d", &vetor[i]);
	} 
	
	for (i = 0; i < qtd - 1; i++) {
		for (j = 0; j < qtd - i - 1; j++) {
			if (vetor[j] > vetor[j + 1]) {
				troca = vetor[j];
				vetor[j] = vetor[j + 1]; 
				vetor[j + 1] = troca;
			}
		}
	}
	
	printf("\nLista dos numeros em ordem crescente:\n");
	
	for (i = 0; i < qtd; i++) {
		printf("%d ", vetor[i]);
	}
	
	return 0;
}
