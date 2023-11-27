#include <stdio.h>

float maior(float num1, float num2){//declarei um nome para a funcao maior e escrevi os paramentros
	if(num1 > num2){
	 	return num1;
	}else{
		return num2;
	}
}

int main(){
	float x, y, m;
	
	printf("digite um numero: \n");
	scanf("%f", &x);
	printf("digite outro numero: \n");
	scanf("%f", &y);
	
	m = maior(x, y);//chamei a funcao 'maior' para comparar essas duas variaveis
	
	printf("Maior: %.2f", m);
}
