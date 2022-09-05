#include <stdio.h>
#include <locale.h>

#define linhas 3
#define colunas 3

struct presentes {
	int comportamento[linhas][colunas];
	int merecimento[colunas];
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct presentes presentes;
	int i, j;

	for (j = 0; j < colunas; j++) { // Lê três valores de uma vez. 
	// Se fosse elemento por elemento, aí sim usaria dois for.
	    printf("Digite a idade da criança %d: ", j+1);
	    scanf("%d", &presentes.comportamento[0][j]);
	    fflush(stdin);
	       	
	    printf("Digite a nota do comportamento da criança %d: ", j+1);
	    scanf("%d", &presentes.comportamento[1][j]);
	    fflush(stdin);
	       	
	    printf("Digite a nota do rendimento escolar da criança %d: ", j+1);
	    scanf("%d", &presentes.comportamento[2][j]);
	  	fflush(stdin);
	}
	
	//Imprimindo a matriz
	/*for (i = 0; i < linhas; i++) {
    	for (j = 0; j < colunas; j++) {
        	printf("%d\t", comportamento[i][j]);
    	}
    	printf("\n"); // Passar pra próxima linha
	}*/
	
	// Validando as crianças que receberão presentes
	for (j = 0; j < colunas; j++) {
		if ((presentes.comportamento[0][j] < 12) && (presentes.comportamento[1][j] > 8) && (presentes.comportamento[2][j] > 6)){
			presentes.merecimento[j] = 1;
		} else {
			presentes.merecimento[j] = 0;
		}
	}

	// Número de voltas  == qtd de elementos da matriz
	printf("\nAs seguintes crianças merecem ganhar presente:\n");
	
	for (j = 0; j < colunas; j++) {
    	if (presentes.merecimento[j] == 1){
    		printf("%d\n", j+1);
		}
	}
	
	getch(); 
    return 0; 
}
