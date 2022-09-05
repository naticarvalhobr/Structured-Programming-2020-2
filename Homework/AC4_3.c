#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MIN 3
#define MAX 5

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char concatenacao [250];
	char string[5][51];
	int i, j, qtd;
	
	do {
		printf("\nQuantas palavras deseja juntar? ");
		scanf("%i", &qtd);
		getchar();
		if ((qtd < MIN) || (qtd > MAX)){
			printf("\nQuantidade inválida. Digite novamente.\n");
		}	
	} while ((qtd < MIN) || (qtd > MAX));
	
	printf("\nDigite a palavra 1: ");
	scanf("%s", string[0]);
	getchar();
	string[0][0] = toupper(string[0][0]);
	
	strcpy(concatenacao, string[0]);
	
	for (i = 1; i < qtd; i++){
		printf("\nDigite a palavra %i: ", i+1);
		scanf("%s", string[i]);
		getchar();
			
		string[i][0] = toupper(string[i][0]);
		strcat(concatenacao, " ");
		strcat(concatenacao, string[i]);
	}
	
	printf("\nPalavras juntas: %s", concatenacao);
	
	return 0;
}
