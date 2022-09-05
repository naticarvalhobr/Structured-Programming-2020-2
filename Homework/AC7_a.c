#include <stdio.h>

#define TAM 5

int pesquisa_binaria_iter(int chave, int numeros[], int inicio, int fim, int result_iter);

int main() {
	
	int i, chave, numeros [TAM], inicio, fim, result_iter;

  	inicio = 0;
	fim = TAM - 1;
	
	printf("Insira %d elementos:\n", TAM);

	for (i = 0; i < TAM; i++) {
		scanf("%d", &numeros[i]);
	}
	
	printf("\nInsira valor que deseja procurar: ");
	scanf("%d", &chave);
  
  	result_iter = pesquisa_binaria_iter(chave, numeros, inicio, fim, result_iter);
  	
  	printf("\nResultado pesquisa iterativa:\n");
 	
	if (result_iter == -1)
		printf("\nO valor %d nao foi encontrado!\n", chave);
	else
    	printf("\n%d esta presente no indice %d.\n", chave, result_iter + 1);

  return 0;
}

int pesquisa_binaria_iter(int chave, int numeros[], int inicio, int fim, int result_iter) {
	
	int meio; 
	
	meio = (inicio + fim) / 2;

	while (inicio <= fim) {
    	if (numeros[meio] < chave)
      		inicio = meio + 1;
    	else if (numeros[meio] == chave) {
      		result_iter = meio;
      		break;
    	}
    	else
      		fim = meio - 1;

    meio = (inicio + fim)/2;
  }
  
 	if (inicio > fim)
    	result_iter = -1;
    
	return result_iter;
}
