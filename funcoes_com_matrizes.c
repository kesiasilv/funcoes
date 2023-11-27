#include <stdio.h>
/*sintaxe para usar matrizes em funcoes:
<tipo> <função>(<tipo> m[][<tam2>], int tam1){...}
*/
//confira um exemplo dessa sintaxe

void imprime(int m[][4], int n){
	int i, j;
	for(i=0; i<n; i++){//indica a coluna
		for(j=0; j<4; j++){//indica as linhas
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mat[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {91, 101, 111, 121}};
				    
	imprime(mat, 3);//precisa colocar o valor de n neste caso n vale 3
}
