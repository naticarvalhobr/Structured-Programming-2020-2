#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese"); 

	int i;
	float vet1[20], vet2[20];
	
	for(i=0; i <= 20; i++){
		printf("Digite o valor de %i: \n", i);
		scanf("%f", &vet1[i]);
		fflush(stdin);
	} 
	
	for(i=0; i <= 20; i++){
		if (i % 2 == 0){
			vet2[i] = vet1[i] / 2.0;
		} else {
			vet2[i] = vet1[i] * 3.0;
		}
	}
	
	/*for (i=0; i <= 20; i+2){
		vet2[i] = vet1[i] / 2.0;
	}
	
	for (i=1; i <= 19; i+2){
		vet2[i] = vet1[i] * 3.0;
	}*/
	
	for(i=0; i < 20; i++){
		printf("%i	%.2f  %.2f\n", i, vet1[i], vet2[i]);
	} 
	  
	return 0;
}
