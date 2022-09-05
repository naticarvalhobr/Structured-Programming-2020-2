#include <stdio.h>
#include <locale.h>

#define tamanho 10

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float vet1[tamanho], vet2[tamanho], resultado[tamanho];
	
	for (i=0; i <= tamanho; i++){
		printf("\nDigite o fator 1 da multiplicação %i: ", i+1);
		scanf("%f", &vet1[i]);
		printf("Digite o fator 2 da multiplicação %i: ", i+1);
		scanf("%f", &vet2[i]);
	}
	
	
	for (i=0; i <= tamanho; i++){
		resultado[i] = vet1[i] * vet2[i];
	}
	
	for (i=0; i <= tamanho; i++){
		printf("\nResultado %i: %.2f\n", i+1, resultado[i]);
	}

    getch(); 
    return 0; 
}
