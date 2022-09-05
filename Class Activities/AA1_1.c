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
  // kg é float --> double (conversão tem perda de precisão)
  // floats não são precisos na computação. 

  if (pergunta3 == 50.9f){ // 50.9f força a variável a ser float. 
    acertos = acertos + 1;
  }
  
  printf("Você acertou %d pergunta(s)!\n", acertos);

  if (acertos >= 2){
    printf("Você é raiz!\n");
  }
  if (acertos < 2){
    printf("Você é nutella!\n");
  }
  return 0;
}
