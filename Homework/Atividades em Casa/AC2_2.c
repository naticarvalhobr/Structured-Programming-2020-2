#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int termos, i;
	float resultado, final;
	final = 0;
	
	printf("Quantos termos da s�rie deseja imprimir? ");
	scanf("%d", &termos);
	
	for (i=0; i <= termos; i++){
		resultado = (480 - (5 * (termos - 1))) / (10 + (termos - 1));
		final = final + resultado; 
	}
	
	printf("O resultado das divis�es sucessivas � %f", final);
	
    getch(); 
    return 0; 
}  
