#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float x, resultado = 0;
	int n, i;
	
	printf("Digite a base: ");
	scanf("%f", &x);
	
	printf("\nDigite o expoente: ");
	scanf("%d", &n);
	
	resultado = x * x;
	
	for (i=1; i < n; i++){
		resultado = resultado * x;
	}
	
	printf("\nO resultado é: %.2f", resultado);

    getch(); 
    return 0; 
}
