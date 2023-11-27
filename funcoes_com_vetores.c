#include <stdio.h>

/*sintaxes para ultizar funcoes com vetores:
<tipo> <função>(<tipo> <vet>[], int tam) {...}
<tipo> <função>(<tipo> <vet>[<tam>]) {...}
<tipo> <função>(<tipo> *<vet>, int tam) {...}
*/

/*confira exemplos de cada sintaxe:*/
void imprime1(int vet[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", vet[i]);
	}
}

void imprime2(int vet[5]){
	int i;
	for(i=0; i<5; i++){
		printf("%d ", vet[i]);
	}
}

void imprime3(int *vet, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", vet[i]);
	}
}

int main(){
	int v[5] = {1, 2, 3, 4, 5};
	
	puts("primeiro imprime: ");
	imprime1(v, 5);
	
	puts("\nsegundo imprime: ");
	imprime2(v);
	
	puts("\nterceiro imprime: ");
	imprime3(v, 5);
}
