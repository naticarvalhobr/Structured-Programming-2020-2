#include <stdio.h>

int horas(double distancia, double braco);

int main () {
	
	float distancia, braco;
	
	printf("Digite o diametro da lagoa: ");
	scanf("%f", &distancia);

	printf("Digite o tamanho do braco da perereca: ");
	scanf("%f", &braco);
	
	printf("Tempo total: %d horas", horas(distancia, braco));
		
	return 0;
}

int horas(double distancia, double braco) {
	if (braco > distancia) {
		return 0;
	}
	
	return 1 + horas(distancia / 2.0, braco); // A cada uma hora, diminui a distancia pela metade
}

/* 80 cm a lagoa / 6cm o braco
	1h --> 40cm
	1h --> 20cm
	1h --> 10cm
	1h --> 5cm // já é menor que o braco
	4h no total	
*/
