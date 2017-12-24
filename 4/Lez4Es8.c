#include <stdio.h>

int main(void) {
	int h=0, l=0;
	scanf("%d", &h);
	scanf("%d", &l);

	if(h==1 && h==l) {
		printf("*");
		return 0;
	}

	for(int i=0; i<l; i++) printf("*");
	printf("\n");
	for(int i=0; i<h-2; i++){
		printf("*");
		for(int j=0; j<l-2; j++) printf(" ");
		puts("*");
	}
	for(int i=0; i<l; i++) printf("*");

	return 0;
}
