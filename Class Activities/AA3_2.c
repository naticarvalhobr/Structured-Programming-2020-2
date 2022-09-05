// pegar o nr da poltrona e ver se está disponível. Se sim, reserva. Se não, 
// mostre a mensagem para tentar novamente. 
// Exibir o mapa de poltronas. Solicitar o número da poltrona que ele quer reservar.
// Validar se a poltrona está disponível. Marcar a poltrona como reservada.

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

#define linhas 4
#define colunas 8

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int opcao, i, j, poltrona;
	int cadeiras[linhas][colunas], ocupadas[linhas][colunas];
	char controle;
	
	printf("1. Reservar poltronas\n");
	printf("2. Exibir poltronas\n");
	printf("\n");
	printf("0. Sair\n");
	
		do {
			printf("\nSelecione a opção desejada: ");
			scanf("%d", &opcao);
			if ((opcao < 0) || (opcao > 2)) {
				printf("Opção inválida. Tente novamente!");
			}
		} while ((opcao < 0) || (opcao > 2));
	
	while (opcao != 0){	
		if (opcao == 1){
			// Mapa de poltronas
		
			for (i = 0; i < linhas; i++) {
	    		for (j = 0; j < colunas; j++) {
	        		printf("%[%02d] ", (4 - i) + (4 * j));
	    		}
	    		printf("\n"); // Passar pra próxima linha
			}
			
			do{
				do{	
					printf("Informe a poltrona que deseja: ");
					scanf("%d", &poltrona);
					fflush(stdin);
					if ((poltrona <= 0) || (poltrona > 29)){
						printf("As poltronas variam de 1 a 29. Tente novamente.\n");
					}
				} while ((poltrona <= 0) || (poltrona > 29));
				
				for (i = 0; i < linhas; i++) {
		    		for (j = 0; j < colunas; j++) {
		        		if (poltrona == cadeiras[i][j]){
		        			if (ocupadas[i][j] != 1){ // assento desocupado
		        				printf("Assento %d escolhido.\n", cadeiras[i][j]);
		        				ocupadas[i][j] = 1;
							} else {
								printf("Assento escolhido já está ocupado.\n");
							}
						}
					}
				}
				
				do{
					printf("\nDeseja reservar uma poltrona?(S/N) ");
					scanf("%c", &controle);
					fflush(stdin);
					controle = toupper(controle);
					if ((controle != 'S') && (controle != 'N')){
						printf("Opção inválida. Tente novamente.");
					}
				} while ((controle != 'S') && (controle != 'N'));
			} while (controle == 'S');
		}
		
		if (opcao == 2){
			printf("Lista de poltronas ocupadas: ");
			for (i = 0; i < linhas; i++) {
		    	for (j = 0; j < colunas; j++) {
		    		if (ocupadas[i][j] == 1){
		    			printf("Cadeira na linha %d e coluna %d.\n", i+1, j+1);
					}
		    	}
			}
			printf("As outras cadeiras estão disponíveis.\n");
		} 
		do {
			printf("\nSelecione a opção desejada: ");
			scanf("%d", &opcao);
			if ((opcao < 0) || (opcao > 2)) {
				printf("Opção inválida. Tente novamente!");
			}
		} while ((opcao < 0) || (opcao > 2));
	}
	
	getch(); 
    return 0; 
}
