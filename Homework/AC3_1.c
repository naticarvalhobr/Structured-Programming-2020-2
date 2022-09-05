#include <stdio.h>
#include <locale.h>
#include <time.h>

#define linhas 5
#define colunas 5

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[linhas][colunas];
	int i, j;
	
	srand(time(NULL));

	// Preencher a matriz com n�meros aleat�rios
	for (i=0; i < linhas; i++){ // Percorre as linhas
		for (j=0; j < colunas; j++){ // Percorre, para cada linha, todas as colunas
			matriz[i][j] = rand() % 10; 
		}
	}
	
	// Debug
	for(i=0; i < 5; i++){
		for (j=0; j < 5; j++){
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	// Imprimir a diagonal principal da matriz
	for (i=0; i < 5; i++){ // Apenas um for pois os n�meros de linhas e colunas s�o iguais na diagonal e a matriz � quadrada
		for (j=0; j < i; j++){          printf("    "); // Printar espa�os antes dos elementos
    }
    printf("[%d]\n", matriz[i][i]); // i = 0; elemento [1][1]
	}
	printf("\n");
	 
  return 0; 
}
