#include <stdio.h> 
#include <conio.h>
#include <locale.h>

int main(){ 
	
	setlocale(LC_ALL,"Portuguese");
	
	int ddd;
	
	printf("Informe o número do DDD: ");
	scanf("%i", &ddd); 
	fflush(stdin);
	
	switch(ddd)
	{
		case 61: 
			printf("\nDDD de Brasília");
			break;
		case 71: 
			printf("\nDDD de Salvador");
			break;
		case 11: 
			printf("\nDDD de São Paulo");
			break;
		case 21:
			printf("\nDDD do Rio de Janeiro");
			break;
		case 32:
			printf("\nDDD de Juiz de Fora");
			break;
		case 19:
			printf("\nDDD de Campinas");
			break;
		case 27:
			printf("\nDDD de Vitória");
			break;
		case 31:
			printf("\nDDD de Belo Horizonte");
			break;
		default: printf("\nDDD não cadastrado");
	}
	getch(); 
    return 0; 
}  
