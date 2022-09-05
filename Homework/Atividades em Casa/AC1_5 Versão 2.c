#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float total;
	int reais, centavos;
	int cedula100, cedula50, cedula20, cedula10, cedula5, cedula2;
	int moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;
	
	//1. Ler um valor de ponto flutuante
	printf("Digite o valor total: ");
	scanf("%f", &total);
	
	//2. Separar reais e centavos em duas variáveis "int"
	reais = total;
	centavos = round((total-reais) * 100);
	
	//3. Calcular a qtd de cada cedula
	cedula100 = reais / 100;
	reais = reais % 100;
	
	cedula50 = reais / 50;
	reais = reais % 50;
	
	cedula20 = reais / 20;
	reais = reais % 20;
	
	cedula10 = reais / 10;
	reais = reais % 10;
	
	cedula5 = reais / 5;
	reais = reais % 5;
	
	cedula2 = reais / 2;
	reais = reais % 2;
		
	//4. Calcular a qtd de cada moeda
	centavos = centavos + reais * 100; // Converter 1 real que pode ter sobrado para reais
	
	moeda100 = centavos / 100; 
	centavos = centavos % 100;

	moeda50 = centavos / 50; 
	centavos = centavos % 50;
	
	moeda25 = centavos / 25; 
	centavos = centavos % 25;
	
	moeda10 = centavos / 10; 
	centavos = centavos % 10;
	
	moeda5 = centavos / 5; 
	centavos = centavos % 5;
	
	moeda1 = centavos / 1; 
	centavos = centavos % 1;
	// ou apenas moeda1 = centavos;
	
	//5. Escrever as qtd de cada cedula e moeda
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cedula100);
	printf("%d nota(s) de R$ 50.00\n", cedula50);
	printf("%d nota(s) de R$ 20.00\n", cedula20);
	printf("%d nota(s) de R$ 10.00\n", cedula10);
	printf("%d nota(s) de R$ 5.00\n", cedula5);
	printf("%d nota(s) de R$ 2.00\n", cedula2);
	printf("\n");
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda100);
	printf("%d moeda(s) de R$ 0.50\n", moeda50);
	printf("%d moeda(s) de R$ 0.25\n", moeda25);
	printf("%d moeda(s) de R$ 0.10\n", moeda10);
	printf("%d moeda(s) de R$ 0.05\n", moeda5);
	printf("%d moeda(s) de R$ 0.01\n", moeda1);
	
	return 0;
}
