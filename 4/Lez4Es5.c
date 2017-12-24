#include <stdio.h>

int main(void) {
	int holder[10]={0};
	for(int i=0; i<10; i++) scanf("%d", &holder[i]);

	for(int i=0; i<10; i++){
		if((holder[i]%2==0) && (holder[i]>=0)) printf("%d\n", holder[i]);
		else if ((holder[i]<0) && (i<9) && (holder[i+1]>=0)) printf("%d\n", holder[i]);
	}


	return 0;
}
