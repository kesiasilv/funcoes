#include <stdio.h>
#include <stdlib.h>

double area_quadrado(double L){
	double A = L * L;
	return A;
}
int main(){
	double lado, area;
	
	printf("digite o lado: ");
	scanf("%lf", &lado);
	
	area = area_quadrado(lado);
	
	printf("Area = %.2lf", area);

	
}
