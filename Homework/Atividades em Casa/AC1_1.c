#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float raio, area;
	
	printf("Raio do c�rculo: ");
	scanf("%f", &raio);
	fflush(stdin); 
	
	area = 3.14159 * pow(raio, 2);
	printf("\n�rea = %.2f u.a.", area); 
	 	 	
    getch(); 
    return 0; 
}  
