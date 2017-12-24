#include <stdio.h>

int main(void) {

	char var[40] = {' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' ',
					' ', ' ', ' ', ' ', ' '};
	char n;

	for(int i=0;i<40;i++){
		scanf("%c", &n);
		if(n=='\n') i=41;
		else var[i] = n;
	}

	int lunghezza = 0;
	for(int i=39;i>-1;i--){
		if(var[i]!=' ' && !lunghezza) lunghezza++;
		else if(lunghezza) lunghezza++;
	}
	
	int pal=1;

	for(int i=0;i<((lunghezza/2)+1);i++)
		if(var[i]!=var[lunghezza-i-1]) pal=0;

	printf("%d\n", pal);
	
	return 0;
}