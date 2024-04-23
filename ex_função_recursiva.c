#include <stdio.h>
#include <stdlib.h>
//função recursiva
int fatorial(int n){
	if(n == 0){
		return 1;
	}else{
		return n *fatorial(n-1);
	}
}
int main(){
	int x = fatorial(5);
	printf("%d", x);
	return 0;
}//explicação detalhada deste código (yt: progamação descomplicada, video recursão em funcionamento)
