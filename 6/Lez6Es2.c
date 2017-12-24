#include <stdio.h>

int min_azzera(int *a){
	int minimo=*a;

	for(int i=1;i<10;i++){
		if(minimo>*(a+i)) minimo=*(a+i);
	}

	for(int i=1;i<10;i=i+2){
		*(a+i)=0;
	}

	return minimo;
}

int main(void) {
	int holder[10]={0};

	for(int i=0; i<10; i++) scanf("%d", &holder[i]);

	int minimo = min_azzera(holder);

	for(int i=0;i<10;i++) printf("%d\n", holder[i]);
	printf("%d", minimo);

	return 0;
}
