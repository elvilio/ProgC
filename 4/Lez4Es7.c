#include <stdio.h>

int main(void) {
	int n=0;
	scanf("%d", &n);

	for(int i=n; i>0; i=i-2){
		for(int j=0; j<i; j++) printf("*");
		printf("\n");
		if(i==1 || i==2) break;
	}

	return 0;
}
