#include <stdio.h>

float approx_sqrt(int z) {
	float ris=1;
	for(int i=1; i<=z; i++) ris=0.5*(ris+(i/ris));
	return ris;
}

int main(void) {
	int z=0;
	scanf("%d", &z);
	printf("%0.4f", approx_sqrt(z));
	return 0;
}
