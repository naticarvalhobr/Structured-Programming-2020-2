#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, valores[5];
	
	for (i=0; i <= 4; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	printf("\nValores na ordem inversa:\n");
	
	for (i=4; i >= 0; i--){
		printf("%d\n", valores[i]);
	}

    getch(); 
    return 0; 
}
