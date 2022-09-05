#include <stdio.h>
#include <stdlib.h>

/*
*	Ordena em ordem decrescente um vetor de inteiros. 
*	
*	@vet: o vetor de inteiros.
*	@inicio: o indice que marca o inicio do vetor. 
*	@fim: o indice que marca o fim do vetor. 
*/

void quicksort(int vet[], int inicio, int fim) {
	int i, j, pivo, tmp; // inicio e fim são os indices, a posição

	i = inicio; 
	j = fim; 
	pivo = vet[(i + j) / 2]; 
	
	while (i < j) { // se o i >= j, o vetor já está ordenado
		while (pivo < vet[i]) i++; // i crescendo até pivô. Compara os valores, não com a posição do pivô
		while (pivo > vet[j]) j--; // j decrescendo até pivô
		// Se quiser na ordem crescente, apenas troque os sinais nas linhas 19 e 20.
		// Para ordenar em ordem alfabética ou ordenar structs, o unico lugar que deve mexer é nas linhas 19 e 20.
		
		if (i <= j) { // troca os elementos apenas se i e j não tiverem se cruzado
			tmp = vet[i]; // variavel temporaria apenas para trocar os elementos de posição
			vet[i] = vet[j];
			vet[j] = tmp;
			// Depois que troca, avança com i e com j.
			i++;
			j--;
		}
	}
	if (j > inicio) {
		quicksort(vet, inicio, j); // Ordenar os subvetores
	}
	if (i < fim) {
		quicksort(vet, i, fim);
	}
}

int main() {
	int numeros[] = { 10, 12 };
	int i, qtd = 2;
	
	printf("Vetor original:\n");
	for(i = 0; i < qtd; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	quicksort(numeros, 0, qtd - 1);
	
	printf("Vetor ordenado:\n");
	for(i = 0; i < qtd; i++) {
		printf("%d ", numeros[i]);
	}	
	
	return 0;
}

/* Comparando strings:
	while (strcmp(pivo.nome, alunos[i].nome) < 0) i++; // Se a primeira, em ordem alfábetica, for menor que a segunda
	while (strcmp(pivo.nome, alunos[j].nome) > 0) j--; // Se a primeira, em ordem alfábetica, for maior que a segunda
*/

// Retorne uma string passando ela por referência
