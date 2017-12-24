#include <stdio.h>

int conta(char var[], int n, char c){
	int holder = 0;
	while(n>0){
		if(var[n]==c) holder++;
		n--;
	}
	return holder;
}

int main(void) {

	char var[40]={0};
	char holder;
	for(int i=0;i<40;i++){
		scanf("%c", &holder);
		if(holder == '\n') i=40;
		else var[i]=holder;
	}

	char n;
	scanf("%c", &n);

	printf("%d\n", conta(var, 40, n));
	return 0;
}