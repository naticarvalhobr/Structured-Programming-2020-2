#include <stdio.h>

int fib_iter(int n, int t2);
int fib_rec(int n);

int main (){
	int n, t2;
	t2 = 1;

	printf("Digite a posicao da sequencia: ");
	scanf("%d", &n);
		
	printf("Fib iter(%d) = %d\n", n, fib_iter(n, t2));
	printf("Fib rec (%d) = %d\n\n", n, fib_rec(n-1));
	
	
	return 0;
}

int fib_iter(int n, int t2) {
	int t1 = 0;
	int prox = 0;
	int i;
	
	if(n == 0 || n == 1) {
		return n;
	} else {
		prox = t1 + t2; // prox = 0 + 1
		for (i = 3; i <= n; i++) { // n = 5 Começa a fazer a somatoria a partir da posiçao 3
			t1 = t2; // t1 = 1 					t1 = 2		
			t2 = prox; // t2 = 1 	t2 = 2		t2 = 3
			prox = t1 + t2; // prox = 2 	prox = 3		prox = 5
		}
		return t2;
	}		
}

int fib_rec(int n){
	
	if (n <= 1) {
		return n; 
	} 
	
	return fib_rec(n - 1) + fib_rec(n - 2);
}


