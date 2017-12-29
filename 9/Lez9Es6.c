#include <stdio.h>

// function declaration

int main(void){
	char var1[40], var2[40], var3[40];

	scanf("\n%s", var1);
	scanf("\n%s", var2);
	scanf("\n%s", var3);

	printf("%s\n", var1);
	printf("%s\n", var2);
	printf("%s\n", var3);

	printf("%s ", var1);
	printf("%s ", var2);
	printf("%s\n", var3);
}