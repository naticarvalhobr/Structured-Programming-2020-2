#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float raio, area;
	
	printf("Raio do círculo: ");
	scanf("%f", &raio);
	fflush(stdin); 
	
	area = 3.14159 * pow(raio, 2);
	printf("\nÁrea = %.2f u.a.", area); 
	 	 	
    getch(); 
    return 0; 
}  
