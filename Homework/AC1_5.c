#include <stdio.h> 
#include <conio.h>
#include <locale.h>

int main(){ 
	
	setlocale(LC_ALL,"Portuguese");
	
	float valor, moeda001;
	int nota100, nota50, nota20, nota10, nota5, nota2;
	int moeda1, moeda050, moeda025, moeda010, moeda005;
	
	printf("Insira o valor que deseja trocar: ");
	scanf("%f", &valor);
	fflush(stdin);
	
	nota100 = valor / 100;
	nota50 = (valor - (nota100 * 100)) / 50;
	nota20 = (valor - (nota100 * 100) - (nota50 * 50)) / 20;
	nota10 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20)) / 10;
	nota5 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10)) / 5;
	nota2 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5)) / 2;
	moeda1 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5) - (nota2 * 2)) / 1;
	moeda050 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5) - (nota2 * 2) - (moeda1 * 1)) / 0.50; 
	moeda025 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5) - (nota2 * 2) - (moeda1 * 1) - (moeda050 * 0.50)) / 0.25;
	moeda010 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5) - (nota2 * 2) - (moeda1 * 1) - (moeda050 * 0.50) - (moeda025 * 0.25)) / 0.10; 
	moeda005 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5) - (nota2 * 2) - (moeda1 * 1) - (moeda050 * 0.50) - (moeda025 * 0.25) - (moeda010 * 0.10)) / 0.05; 
	moeda001 = (valor - (nota100 * 100) - (nota50 * 50) - (nota20 * 20) - (nota10 * 10) - (nota5 * 5) - (nota2 * 2) - (moeda1 * 1) - (moeda050 * 0.50) - (moeda025 * 0.25) - (moeda010 * 0.10) - (moeda005 * 0.05)) / 0.01; 
	
	printf("NOTAS:\n");
	printf("%i nota(s) de R$ 100.00\n", nota100);
	printf("%i nota(s) de R$ 50.00\n", nota50);
	printf("%i nota(s) de R$ 20.00\n", nota20);
	printf("%i nota(s) de R$ 10.00\n", nota10);
	printf("%i nota(s) de R$ 5.00\n", nota5);
	printf("%i nota(s) de R$ 2.00\n", nota2);
	printf("MOEDAS:\n");
	printf("%i moeda(s) de R$ 1.00\n", moeda1);
	printf("%i moeda(s) de R$ 0.50\n", moeda050);
	printf("%i moeda(s) de R$ 0.25\n", moeda025);
	printf("%i moeda(s) de R$ 0.10\n", moeda010);
	printf("%i moeda(s) de R$ 0.05\n", moeda005);
	printf("%.2f moeda(s) de R$ 0.01\n", moeda001);
	
	getch(); 
    return 0; 
}  


