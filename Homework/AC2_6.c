#include <stdio.h>
#include <locale.h>

#define tamanho 3

int main() {

	setlocale(LC_ALL,"Portuguese"); 

	int i;
	float vet1[tamanho], vet2[tamanho];
	
	for(i=0; i < tamanho; i++){
		printf("Digite o valor de %i: \n", i+1);
		scanf("%f", &vet1[i]);
		fflush(stdin);
	} 
	
	for(i=0; i <= tamanho; i++){
		if (i % 2 == 0){
			vet2[i] = vet1[i] / 2.0;
		} else {
			vet2[i] = vet1[i] * 3.0;
		}
	}
	
	/*for (i=0; i < tamanho; i+2){
		vet2[i] = vet1[i] / 2.0;
	}
	
	for (i=1; i < tamanho; i+2){
		vet2[i] = vet1[i] * 3.0;
	}*/
	
	for(i=0; i < tamanho; i++){
		printf("%i	%.2f  %.2f\n", i, vet1[i], vet2[i]);
	} 
	
	getch(); 
	return 0;
}
