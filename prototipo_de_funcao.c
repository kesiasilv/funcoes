#include <stdio.h>

/*prototipo de uma função, é usada para a funcao que
fica depois do main, serve para chamar as 
funçoes que estão depois do main.
sintaxe:
<tipoo> <nome_da_funcao>(<parametro>);
*/

//confira o exemplo:

float maior(float num1, float num2);//prototipo da função

int main(){
	float x, y, m;
	
	printf("digite um numero: \n");
	scanf("%f", &x);
	printf("digite outro numero: \n");
	scanf("%f", &y);
	
	m = maior(x, y);
	
	printf("Maior: %.2f", m);
}

float maior(float num1, float num2){//função
	if(num1 > num2){
	 	return num1;
	}else{
		return num2;
	}
}
