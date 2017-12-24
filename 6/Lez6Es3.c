#include <stdio.h>
#define DIM 7

void primoultimopari(int arr[], int dim, int* primaocc,int* ultimaocc){
	for(int i=0;i<dim;i++){
		if((*(arr+i))%2==0){
			if(*primaocc==-1) *primaocc=i;
			*ultimaocc=i;
		}
	}
}

int main(void) {
	int holder[DIM]={0};
	int primaocc=-1, ultimaocc=-1;

	for(int i=0;i<DIM;i++) scanf("%d", &holder[i]);

	primoultimopari(holder, DIM, &primaocc, &ultimaocc);

	printf("%d %d", primaocc, ultimaocc);

	return 0;
}
