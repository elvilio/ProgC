#include <stdio.h>

int max(int a, int b){
	if (a<b) return b;
	else return a;
}

int min(int a, int b){
	if (a>b) return b;
	else return a;
}


int MCD(int n, int m){
	for(int i=n;i>0;i--){
		if(n%i==0 && m%i==0){
			return i;
		}
	}
	return 1;
}


int mcm(int n, int m){
	return (n*m)/MCD(n, m);
}

int main(void) {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);

	printf("%d\n", MCD(max(n, m), min(n, m)));
	printf("%d", mcm(max(n, m), min(n, m)));

	return 0;
}
