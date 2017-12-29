#include <stdio.h>

int main(void){
	int lenght1=0, lenght2=0;

	scanf("%d", &lenght1);

	char var1[lenght1+1];
	for(int i=0;i<lenght1;i++){
		scanf("\n%c", &var1[i]);
	}
	var1[lenght1] = '\0';


	scanf("%d", &lenght2);

	char var2[lenght2+1];
	for(int i=0;i<lenght2;i++){
		scanf("\n%c", &var2[i]);
	}
	var2[lenght2] = '\0';


	char var3[lenght1+lenght2+1];
	for(int i=0;i<lenght1;i++){
		var3[i]=var1[i];
	}
	for(int i=0;i<lenght2;i++){
		var3[i+lenght1]=var2[i];
	}
	var3[lenght1+lenght2] = '\0';

	printf("%s", var3);

	return 0;
}