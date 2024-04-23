#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
	int i, f = 1;
	for(i=1; i<=n; i++){
		f = f * i;  
	}
	return f;
}
int main(){
	int x, calculo;
	
	printf("digite um numero para calcular o seu fatorial: ");
	scanf("%d", &x);
	
	calculo = fatorial(x);
	
	printf("resultado: %d", calculo);	
	
}
