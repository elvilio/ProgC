#include <stdio.h>

double exponent(double a, int b){
	double holder=1;
	if(b>0){
		while(b>0){
			holder *= a;
			b--;
		}
	}
	else {
		while(b<0){
			holder *= 1/a;
			b++;
		}
	}
	return holder;
}

int arrotonda(double n){
	if(n-(int)n >= 0.5) return (int) n+1;
	else return (int) n;
}


int funct(int n){
	if(n==0) return 1;
	else if(n==1) return 1;
	else if(n==2) return 1;
	else if(n==3) return 2;
	double phi = 1.618033988749894848204586834365638117720309179805762862135;
	double sq5 = 2.236067977499789696409173668731276235440618359611525724270;
	return arrotonda(exponent(phi, n)-exponent(-phi, -n))/sq5;
}

int main(void){

	int n=0;

	scanf("%d", &n);
	printf("%d\n", funct(n));

	return 0;
}