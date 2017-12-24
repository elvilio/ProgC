#include <stdio.h>
#define DIM 4

int colonna(int n[DIM][3]){
	int holder=-1;
	for(int i=0;i<3;i++){
		for(int j=0;j<DIM;j++){
			if((n[j][i])%3!=0) break;
			if(j==DIM-1) holder=i;
		}
	}
	return holder;
}

int main(void) {
	int n[DIM][3]={0};
	int colon=-1;

	for(int i=0;i<DIM;i++){for(int j=0;j<3;j++) scanf("%d", &n[i][j]);}

	colon = colonna(n);

	printf("%d", colon);
	return 0;
}
