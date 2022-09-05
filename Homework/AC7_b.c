#include <stdio.h>

#define TAM 5

int pesquisa_binaria_rec(int chave, int numeros[], int inicio, int fim);

int main () {
	
	int i, chave, numeros [TAM], inicio, fim, result_iter, result_rec;
	
	inicio = 0;
	fim = TAM - 1;
	
	printf("Insira %d elementos:\n", TAM);

	for (i = 0; i < TAM; i++) {
		scanf("%d", &numeros[i]);
	}
	
	printf("\nInsira valor que deseja procurar: ");
	scanf("%d", &chave);

  	result_rec = pesquisa_binaria_rec(chave, numeros, inicio, fim);
 	
 	printf("\nResultado pesquisa recursiva:\n");
 	
	if (result_rec == -1)
		printf("\nO valor %d nao foi encontrado!\n", chave);
	else
    	printf("\n%d esta presente no indice %d.\n", chave, result_rec + 1);
	
	return 0;
}

/**
* As duas funções procuram um elemento em um vetor de inteiros positivos ordenado em
* ordem crescente usando o método da pesquisa binária.
*
* @param chave: O elemento a ser pesquisado.
* @param numeros: Um vetor de inteiros positivos em ordem crescente.
* @param inicio: O índice do primeiro elemento do vetor.
* @param fim: O índice do último elemento do vetor.
* @return O: índice da primeira ocorrência de \p chave em \p vet ou
* 			-1, caso o elemento não seja encontrado.
*/

int pesquisa_binaria_rec(int chave, int numeros[], int inicio, int fim){
	
	int meio;
 
	if (inicio > fim) // Não encontrado
		return -1;

	meio = (inicio + fim) / 2;

	if (numeros[meio] == chave)  // Encontrado
		return meio;
	else if (chave > numeros[meio])  
    	return pesquisa_binaria_rec(chave, numeros, meio + 1, fim); 
  	else
    	return pesquisa_binaria_rec(chave, numeros, inicio, meio - 1); 
}
