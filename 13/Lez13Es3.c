#include <stdio.h>

// function declaration
int mystrcmp(char* s1, char* s2);

int main(void){

	char var1[1000], var2[1000];
	char n = ' ';
	int i=0;

	while(n!='\n'){
		scanf("%c", &n);
		if(n=='\n') var1[i] = '\0';
		else var1[i] = n;
		i++;
	}
	i=0;
	n=' ';

	while(n!='\n'){
		scanf("%c", &n);
		if(n=='\n') var2[i] = '\0';
		else var2[i] = n;
		i++;
	}

	if(mystrcmp(var1, var2)==1) printf("+1\n");
	else printf("%d\n", mystrcmp(var1, var2));

	return 0;
}

int mystrcmp(char *s1, char *s2){
	for(; *s1 == *s2; s1++, s2++){
		if(*s1 == '\0') return 0;
	}
	if (*s1 < *s2) return -1;
	else return 1;
}