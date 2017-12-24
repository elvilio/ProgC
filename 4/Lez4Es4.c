#include <stdio.h>

int main(void) {
	int a[10]={0};

	for(int i=0; i<10; i++) scanf("%d", &a[i]);

	for(int i=1; i<9; i++){
		if (a[i]==a[i+1] - a[i-1]){
			printf("%d", i);
			break;
		}
		if(i==8) puts("-1");
	}


	return 0;
}
