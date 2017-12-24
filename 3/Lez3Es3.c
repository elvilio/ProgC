#include <stdio.h>

int main(void){
	float a, b, c, media;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	media = (a+b+c)/3;
	printf("%.3f", media);
	return 0;
}
