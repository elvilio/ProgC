#include <stdio.h>

float media(int a[10]){
	float mediaa;
	int holder=0;
	for(int i=0;i<10;i++){
		if (a[i]!=0){
			mediaa+=a[i];
			holder++;
		}
	}
	mediaa=mediaa/holder;
	return mediaa;
}


int main(void) {
	int input[10] = {0};
	for(int i=0;i<10;i++) scanf("%d", &input[i]);

	if (input[9]>0) {
		for(int i=0;i<10;i++)
			if (input[i]<0) input[i]=0;
	}
	else {
		for(int i=0;i<10;i++) {
			if (input[i]>0) input[i]=0;
		}
	}

	printf("%0.2f", media(input));





	return 0;
}
