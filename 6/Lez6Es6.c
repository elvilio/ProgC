#include <stdio.h>

int main(void) {
	int a[4][3]={0}, b[4][3]={0};
	int c[4][3]={0};

	for(int i=0;i<4;i++) for(int j=0;j<3;j++) scanf("%d", &a[i][j]);
	for(int i=0;i<4;i++) for(int j=0;j<3;j++) scanf("%d", &b[i][j]);

	for(int i=0;i<4;i++) for(int j=0;j<3;j++) c[i][j]=a[i][j]+b[i][j];

	for(int i=0;i<4;i++) printf("%d %d %d\n", c[i][0], c[i][1], c[i][2]);

	return 0;
}
