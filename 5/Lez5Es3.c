#include <stdio.h>

float power(float base, int exp){
	float var=1;
	for(int j=1;j<=exp;j++) var*= base;
	return var;
}

float sum_pow(int n, float x){
	float summ=0;
	for(int i=0;i<=n;i++){
		summ+=power(x, i);
	}
	return summ;
}

int main(void) {
	int n=0;
	float x=0;

	scanf("%d", &n);
	scanf("%f", &x);

	printf("%0.2f", sum_pow(n, x));



	return 0;
}
