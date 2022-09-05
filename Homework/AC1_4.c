#include <stdio.h> 
#include <conio.h>
#include <locale.h>

int main(){ 
	
	setlocale(LC_ALL,"Portuguese");
	
	int senha;
	
	do{
		printf("\nDigite a senha: ");
		scanf("%i", &senha); 
		fflush(stdin);
		if (senha != 2002){
			printf("Senha inválida.\n");
		} else {
			printf("Acesso permitido.\n");
		}
	} while (senha != 2002);
	
	getch(); 
    return 0; 
}  
