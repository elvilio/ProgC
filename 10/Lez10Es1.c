#include <stdio.h>
#include <stdlib.h>

int Pot2(int n){
	if(n==1) return 2;
	else return 2*(Pot2(n-1));
}


int main(void){
	int n=0;
	scanf("%d", &n);
	n = Pot2(n);
	printf("%d\n", n);
}