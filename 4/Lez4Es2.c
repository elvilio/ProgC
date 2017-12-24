#include <stdio.h>

int main(void) {
	int holder1[5]={0};
	int holder2[5]={0};
	int summ[5]={0};

	for(int i=0; i<5; i++) scanf("%d", &holder1[i]);
	for(int i=0; i<5; i++) scanf("%d", &holder2[i]);

	for (int i=0; i<5; i++)
		summ[i] = holder1[i] + holder2[i];

	printf("[");
	for (int i=0; i<5; i++){
		if ((i<5) && (i!=0)) printf(",");
		printf("%d", holder1[i]);
	}
	printf("]\n");

	printf("[");
	for (int i=0; i<5; i++){
		if ((i<5) && (i!=0)) printf(",");
		printf("%d", holder2[i]);
	}
	printf("]\n");

	printf("[");
	for (int i=0; i<5; i++){
		if ((i<5) && (i!=0)) printf(",");
		printf("%d", summ[i]);
	}
	printf("]\n");



	return 0;
}
