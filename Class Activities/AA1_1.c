#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {

  setlocale(LC_ALL,"Portuguese"); 

  int pergunta1, acertos = 0;
  char pergunta2;
  float pergunta3;

  printf("Teste seus conhecimentos de Naruto!\n");

  printf("1. Quantas caudas a Kyuubi tem?\n");
  scanf("%d", &pergunta1);
  fflush(stdin);

  if (pergunta1 == 9){
    acertos = acertos + 1;
  } 

  printf("2. Qual a primeira letra do nome da vila onde Naruto nasceu?\n");
  scanf("%c", &pergunta2);
  pergunta2 = toupper(pergunta2);
  fflush(stdin);

  if (pergunta2 == 'K'){
    acertos = acertos + 1;
  }

  printf("3. Quantos kg o Naruto tinha no Shippuden?\n");
  scanf("%f", &pergunta3);
  fflush(stdin);

  // 50.9 entende como double. 
  // kg � float --> double (convers�o tem perda de precis�o)
  // floats n�o s�o precisos na computa��o. 

  if (pergunta3 == 50.9f){ // 50.9f for�a a vari�vel a ser float. 
    acertos = acertos + 1;
  }
  
  printf("Voc� acertou %d pergunta(s)!\n", acertos);

  if (acertos >= 2){
    printf("Voc� � raiz!\n");
  }
  if (acertos < 2){
    printf("Voc� � nutella!\n");
  }
  return 0;
}
