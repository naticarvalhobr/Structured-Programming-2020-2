#include <stdlib.h>
#include <stdio.h>

#define LIN 4
#define COL 8
#define LIVRE 0
#define OCUPADA 1
#define LIMPA_TELA system("cls")

int main() {
    int poltronas[LIN][COL];
    int i, j;
    int nro_poltrona, ja_estava_reservada;
    int opcao, posicao;
    char status;

    // Inicializa as poltronas como livres.
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            poltronas[i][j] = LIVRE;
        }
    }

    opcao = 0;
    do {
        if (opcao < 0 || opcao > 2) {
            printf("ERRO: Opção inválida! Tente novamente!\n\n");
        }

        printf("-------------------------------------------\n");
        printf("                  UCBus\n");
        printf("-------------------------------------------\n");
        printf("1) Reservar Poltrona\n");
        printf("2) Exibir Poltronas\n");
        printf("\n");
        printf("0) Sair\n");
        printf("-------------------------------------------\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                LIMPA_TELA;
                printf("-------------------------------------------\n");
                printf("          RESERVA DE POLTRONAS\n");
                printf("-------------------------------------------\n");
                do { 
                    printf("Digite o número da poltrona: ");
                    scanf("%d", &nro_poltrona);
                    getchar();
            
                    if (nro_poltrona < 1 || nro_poltrona > 32) {
                        printf("ERRO: Posição inválida! Tente novamente...\n\n");
                    } else {
                        // Tenta reservar a poltrona informada.
                        i = (4 - (nro_poltrona % 4)) % 4;
                        j = (i - 4 + nro_poltrona) / 4;
                    
                        if (poltronas[i][j] == LIVRE) {
                            ja_estava_reservada = 0;
                            poltronas[i][j] = OCUPADA;
                            printf("\nPoltrona reservada com sucesso!\n\n");

                            printf("Digite ENTER para voltar ao menu...\n");
                            getchar();
                        } else {
                            ja_estava_reservada = 1;
                            printf("Esta poltrona já está reservada! Por favor, escolha outra poltrona...\n\n");
                        }
                    }
                } while (nro_poltrona < 1 || nro_poltrona > 32 || ja_estava_reservada);
                break;
            case 2:
                LIMPA_TELA;
                printf("-------------------------------------------\n");
                printf("             MAPA DE POLTRONAS\n");
                printf("-------------------------------------------\n");
                for (i = 0; i < LIN; i++) {
                    for (j = 0; j < COL; j++) {
                        posicao = 4 - i + 4 * j;
                        i = (4 - (posicao % 4)) % 4;
                        j = (i - 4 + posicao) / 4;
                        if (poltronas[i][j] == LIVRE) {
                        	status = 'O';
						} else {
							status = 'X';
						}
                        printf("[%02d: %c] ", posicao, status);
                    }
                    printf("\n");
                }
                printf("-------------------------------------------\n");
                
                printf("\nDigite ENTER para voltar ao menu...\n");
                getchar();
                break;
        }

        LIMPA_TELA;
    } while (opcao != 0);

    printf("\n*** Bye! Bye!\n");

    return 0;
}
