#include <stdio.h>
#include <stdlib.h>

int menu(){
	int i;
	do{
		printf("escolha uma opcao: \n");
		printf("opcao (1) \n");
		printf("opcao (2) \n");
		printf("opcao (3) \n");
		printf("opcao (4) \n");
		scanf("%d", &i);
	}while((i < 1) || (i > 4));
	return i;
}
int main(){
	int op;
	
	op = menu();
	printf("a escolha foi: %d", op);
}
