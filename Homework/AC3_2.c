#include <stdio.h>
#include <locale.h>

#define linhas 3
#define colunas 10

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int comportamento[linhas][colunas];
	int merecimento[colunas];
	int i, j;

	for (j = 0; j < colunas; j++) { // L� tr�s valores de uma vez. 
	// Se fosse elemento por elemento, a� sim usaria dois for.
	    printf("Digite a idade da crian�a %d: ", j+1);
	    scanf("%d", &comportamento[0][j]);
	    fflush(stdin);
	       	
	    printf("Digite a nota do comportamento da crian�a %d: ", j+1);
	    scanf("%d", &comportamento[1][j]);
	    fflush(stdin);
	       	
	    printf("Digite a nota do rendimento escolar da crian�a %d: ", j+1);
	    scanf("%d", &comportamento[2][j]);
	  	fflush(stdin);
	}
	
	//Imprimindo a matriz
	/*for (i = 0; i < linhas; i++) {
    	for (j = 0; j < colunas; j++) {
        	printf("%d\t", comportamento[i][j]);
    	}
    	printf("\n"); // Passar pra pr�xima linha
	}*/
	
	// Validando as crian�as que receber�o presentes
	for (j = 0; j < colunas; j++) {
		if ((comportamento[0][j] < 12) && (comportamento[1][j] > 8) && (comportamento[2][j] > 6)){
			merecimento[j] = 1;
		} else {
			merecimento[j] = 0;
		}
	}

	// N�mero de voltas  == qtd de elementos da matriz
	for (j = 0; j < colunas; j++) {
    	if (merecimento[j] == 1){
    		printf("A crian�a %d merece ganhar presente!\n", j+1);
		}
	}
	
	getch(); 
    return 0; 
}
