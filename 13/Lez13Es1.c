#include <stdio.h>

// function declaration
int my_strlen(char *s);

int main(void){

	char var[1000];
	char n=' ';
	int i=0;
	while(n!='\n'){
		scanf("%c", &n);
		if(n=='\n') var[i] = '\0';
		else var[i] = n;
		i++;
	}
	printf("%d\n", my_strlen(var));
	return 0;
}

int my_strlen(char *s){
	if((*s) != '\0') return 1 + my_strlen(s + 1);
	else return 0;
}