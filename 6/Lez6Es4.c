#include <stdio.h>

int funk(int* a, int* b){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(*(a+i)>= *(b+j)) break;
			if(j==2) return 1;
		}
	}
	return 0;
}

int main(void) {
	int a[3]={0}, b[3]={0};
	int var=-1;

	for(int i=0; i<3; i++) scanf("%d", &a[i]);
	for(int i=0; i<3; i++) scanf("%d", &b[i]);

	var = funk(a, b);

	if(var) printf("TRUE");
	else printf("FALSE");

	return 0;
}
