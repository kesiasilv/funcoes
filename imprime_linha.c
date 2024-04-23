#include <stdio.h>
#include <stdlib.h>

void imprime_linha(int n){//void função sem retorno
	int i;
	for(i=1; i<=n; i++){
		printf("linha %d\n", i);
	}
}
int main(){
	imprime_linha(10);
  return 0;
}
