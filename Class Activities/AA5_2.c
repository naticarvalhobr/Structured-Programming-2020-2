#include <stdio.h>

double maior_iter(double numeros [], int n);
double maior_rec(double numeros [], int n);

int main () {
	double numeros [] = {1, 5, 7, 8, 11};
	int maior;
	
	printf("Maior_iter: %d", maior_iter(numeros, 5)); // pré-condição: assume que há 1 ou mais valores no vetor
	printf("Maior_rec: %d", maior_rec(numeros, 5));
	
	return 0;
}

double maior_iter(double numeros [], int n) {
	int i, maior;
	
	maior = numeros[0];
	
	for (i=1; i <= 9; i++){
		if (numeros[i] > maior){
			maior = numeros[i];
			printf("%d\n", maior);
		}
	}
	
	return maior;
}

double maior_rec(double numeros [], int n) {
	double maior;
	
	if (n == 1) { // Caso base
		return numeros[0];
	} 
	
	if (n == 2) { // da linha 44 até a 50, poderia excluir, mas mantive para lembrar o raciocinio
		if (numeros[0] > numeros[1]) {
			return numeros[0];
		} else {
			return numeros [1];
		}
	}
	
	maior = maior_rec(numeros, n-1); // n-1 para isolar o ultimo valor do vetor
	
	if (numeros(n-1) > maior) { // equivalente a linha 45
		return numeros (n-1);
	} else {
		return maior;
	}
	
	return maior;
}

/*
double maior_rec(double numeros[], int n) {
	if (n == 1) {
		return numeros[0];
	}
	if (numeros[n - 1] > maior_rec(numeros, n - 1)) {
		return numeros[n - 1]; 
	}
	
	return maior_rec(numeros, n - 1);
	
int main() {
	double numeros[] = {1, 9, 7}
	
	printf("Maior = %.2lf\n", maior_rec(vet, 2));
	
	return 0;
*/
