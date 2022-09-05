#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese"); 

	int i, numeros [10], menor, maior, posicaom, posicaoM;
	
	printf("Digite o valor 1:\n", i);
	scanf("%i", &numeros[0]);
	fflush(stdin);
	menor = numeros[0];
	posicaom = 1;
	maior = numeros[0];
	posicaoM = 1;
	
	for(i=1; i < 10; i++){
		printf("Digite o valor %i:\n", i+1);
		scanf("%i", &numeros[i]);
		fflush(stdin);
		if (numeros[i] <= menor) {
			menor = numeros[i];
			posicaom = i + 1;
		}
		if (numeros[i] >= maior) {
			maior = numeros[i];
			posicaoM = i + 1;
		}
	}
	
	printf("O menor numero inserido foi %i, na posição %i.\n", menor, posicaom);
	printf("O maior numero inserido foi %i, na posição %i.\n", maior, posicaoM);
	
	return 0;
}

