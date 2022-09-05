#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char origem [100];
	char destino [100];
	int i;
	
	printf("Digite a palavra ou frase que deseja copiar: \n");
	gets(origem);
	
	strcpy(destino,origem);
	
	strupr(destino);
	
	printf("Origem: %s\n", origem);
	
	/*for(i = 0; i < strlen(destino); i++) {
        printf("Destino: %c\n", toupper(destino[i]));
	}*/
	
	printf("Destino: %s\n", destino);
	
	return 0;
}
