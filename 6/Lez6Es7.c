#include <stdio.h>
#define M 4
#define N 2
#define J 3

void matrixmult(int holder1[M][N], int holder2[N][J], int holder3[M][J]){
	for (int c = 0; c < M; c++) {
    	for (int d = 0; d < J; d++) {
        	for (int k = 0; k < N; k++) {
            	holder3[c][d] += holder1[c][k]*holder2[k][d];
    		}
    	}
	}
}

int main(void) {
	int holder1[M][N]={0};
	int holder2[N][J]={0};
	int holder3[M][J]={0};

	for(int i=0;i<M;i++) for(int j=0;j<N;j++) scanf("%d", &holder1[i][j]);
	for(int i=0;i<N;i++) for(int j=0;j<J;j++) scanf("%d", &holder2[i][j]);

	matrixmult(holder1, holder2, holder3);

	for(int i=0;i<M;i++) for(int j=0;j<J;j++){
		if(j==J-1) printf("%d\n", holder3[i][j]);
		else printf("%d ", holder3[i][j]);
	}

	return 0;
}
