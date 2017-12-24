#include <stdio.h>

float approx_sqrt(int z){
	float holder;
	if (z==0) return 1;
	else {
		holder = (approx_sqrt(z-1));
		return ((0.5)*(holder+z/holder));
	}
}

int main(void) {
	int z=1;
	scanf("%d", &z);
	printf("%0.4f", approx_sqrt(z));
	return 0;
}
