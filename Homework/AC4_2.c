#include <stdio.h>
#include <locale.h>
#include <string.h>

#define DNA 20
#define RNA 20

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char basesDNA[DNA];
	char basesRNA[RNA];
	int i;
	
	for (i=0; i < DNA; i++) {
		do {
			printf("\nDigite a base %i: ", i+1);
			scanf("%c", &basesDNA[i]);
			getchar();
			basesDNA[i] = toupper(basesDNA[i]);		
			if ((basesDNA[i] != 'A') && (basesDNA[i] != 'G') && (basesDNA[i] != 'C') && (basesDNA[i] != 'T')){
				printf("\nBase inserida inválida. Digite novamente!\n");
			}
		} while ((basesDNA[i] != 'A') && (basesDNA[i] != 'G') && (basesDNA[i] != 'C') && (basesDNA[i] != 'T'));
		
		switch (basesDNA[i]) {
			case 'A': 
				basesRNA[i] = 'U';
	    		break;
			case 'G': 
				basesRNA[i] = 'C';
	   			break;
			case 'C': 
				basesRNA[i] = 'G';
	    		break;
	    	case 'T': 
	    		basesRNA[i] = 'A';
	    		break;
		}
	}
	
	printf("\n**Fita DNA:**\n");
	
	for(i=0; i < DNA; i++){
		printf("\n%c ", basesDNA[i]);
	}
	
	printf("\n\n**Fita RNA:**\n");
	
	for(i=0; i < RNA; i++){
		printf("\n%c ", basesRNA[i]);
	}	
	
	return 0;
}
