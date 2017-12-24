#include <stdio.h>

float approx_sqrt(int z){
	if (z==0) return 1;
	else return (0.5)*((approx_sqrt(z-1))+z/(approx_sqrt(z-1)));
}

int main(void) {
	int z=1;
	scanf("%d", &z);
	printf("%0.4f", approx_sqrt(z));
	return 0;
}
