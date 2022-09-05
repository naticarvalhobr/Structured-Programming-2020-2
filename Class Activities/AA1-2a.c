#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese"); 

	int linhas, colunas, i, j; 
  
  	printf("Insira o número de linhas.\n");
	scanf("%d", &linhas);
  
	printf("Insira o valor de colunas.\n");
	scanf("%d", &colunas);

	for (i=1; i<=linhas; i++) {
		for (j=1; j<=colunas; j++) {
			printf("*");	  	
		}
		printf("\n");
  	}

  	return 0;
}

