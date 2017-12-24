#include <stdio.h>

int fact(int n, long factor){
	if(n>1){
		factor = (long) n * factor;
		n--;
		return fact(n, factor);
	}
	else return factor;
}

int main(void) {
	int n=0;
	long factor=1;

	scanf("%d", &n);
	printf("%ld", fact(n, factor));
	return 0;
}
