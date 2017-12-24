#include <stdio.h>

int main(void){
	char var[40]={	' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' '};
	char n;
	int guardia=0;

	for(int i=0; i<40; i++){
		scanf("%c", &n);
		if(n!='\n') var[i]=n;
		else i=41;
	}

	for(int i=39; i>-1; i--){
		if(!guardia && var[i]!=' '){
			guardia++;
			printf("%c", var[i]);
		}
		else if(guardia) printf("%c", var[i]);
	}

	return 0;
}