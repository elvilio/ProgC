#include <stdio.h>

// function declaration
char* my_strcpy(char* dest, char* src);


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

	char varcopy[1000];
	my_strcpy(varcopy, var);
	printf("%s\n", varcopy);

	return 0;
}

char * my_strcpy(char *dest, char *src){
	char *holder = dest;
	while(*src!='\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*(dest+1) = '\0';
	return holder;
}