#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float notaA, notaB, notaC, media;
	
	do{
		printf("Nota A: ");
		scanf("%f", &notaA);
		fflush(stdin); 
		if ((notaA < 0) || (notaA > 10)){
			printf("Nota inserida é inválida.");
		}
	} while ((notaA < 0) || (notaA > 10));
	
	do{
		printf("\nNota B: ");
		scanf("%f", &notaB);
		fflush(stdin);
		if ((notaB < 0) || (notaB > 10)){
			printf("Nota inserida é inválida.");
		}
	} while ((notaB < 0) || (notaB > 10)); 
	
	do{
		printf("\nNota C: ");
		scanf("%f", &notaC);
		fflush(stdin); 
		if ((notaC < 0) || (notaC > 10)){
			printf("Nota inserida é inválida.");
		}
	} while ((notaC < 0) || (notaC > 10));
	
	media = ((notaA * 2) + (notaB * 3) + (notaC * 5)) / 10;
	printf("\nMédia = %.2f", media); 
	 	 	
    getch(); 
    return 0; 
}  
