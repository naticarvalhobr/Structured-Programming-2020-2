#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese"); 

	int i, j, linhas; 
  
	printf("Insira o valor de linhas: ");
	scanf("%d", &linhas);
  
	for (i=1; i<=linhas; i++){
  		for (j=1; j<=i; j++){ // escreve os asteriscos da i-ésima linha
  			printf("* ");
		}
		printf("\n"); // saltar de linhas
	}
    
	return 0;
}
// i marca a linha que está
