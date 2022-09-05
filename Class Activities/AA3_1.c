//
#include <stdio.h>
#include <locale.h>

#define linhas 3
#define colunas 3

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int valores[linhas][colunas];
	int SL[linhas], SC[colunas];
	int i, j;

	for (i = 0; i < linhas; i++) {
    	for (j = 0; j < colunas; j++) {
        	printf("Digite o valor [%d][%d]: ", i, j);
        	scanf("%d", &valores[i][j]);
        	fflush(stdin);
    	}
	}
	
	// Somando as linhas
	for (i = 0; i < linhas; i++){
		SL[i] = 0;
		for (j = 0; j < colunas; j++){
			SL[i] = SL[i] + valores[i][j];
		}
	}

	// Somando as colunas
	for (j = 0; j < colunas; j++){
		SC[j] = 0;
		for (i = 0; i < linhas; i++){
			SC[j] = SC[j] + valores[i][j];
		}
	}
	
	//Imprimindo a matriz
	for (i = 0; i < linhas; i++) {
    	for (j = 0; j < colunas; j++) {
        	printf("%d\t", valores[i][j]);
    	}
    	printf("\n"); // Passar pra próxima linha
	}
	
	// Imprimindo a soma das linhas
	for(i = 0; i < linhas; i++){
		printf("Soma da linha %d = %d\n", i, SL[i]);
	}
	
	// Imprimindo a soma das colunas
	for(j = 0; j < colunas; j++){
		printf("Soma da coluna %d = %d\n", j, SC[j]);
	}
	
	getch(); 
    return 0; 
}  
