#include <stdio.h>

int main(void){
	float tempC=-273.15;
	scanf("%f", &tempC);
	float tempF = (tempC*1.8 + 32);
	printf("%.2f", tempF);
	return 0;
}
