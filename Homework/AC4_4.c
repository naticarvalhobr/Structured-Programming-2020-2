#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 20

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[TAM], ch1, len, cont, i, j;
	char string[TAM];
	cont = 0;
	j = 0;
	
	printf("Digite uma string: ");
	gets(string);
	len = strlen(string);
	strupr(string);
	
	printf("\nDigite o caractere: ");
	scanf("%c", &ch1);
	ch1 = toupper(ch1); // poderia fazer essa e a linha 19 direto na linha 26 if (toupper(string[i]) == toupper(c)){	
	for(i=0; i < len; i++) {
		if(string[i] == ch1){
			vetor[j] = i;
			j++;
			cont++;
		}
	}
	
	if (j==0) {
		printf("O caracter %c não foi encontrado na string fornecida.", ch1);
	} else {
		printf("\nLocais em que o caracter inserido aparece: ");
		for(j=0; j < cont; j++){
			printf("%i ", vetor[j]);
		}
	}
	
	
	return 0;
}
