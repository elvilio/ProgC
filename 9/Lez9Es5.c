#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
	char info[40];
	struct elem *next;
} Elemento;
typedef Elemento *Lista;

void add(Lista *head){
	if((*head)==NULL){
		(*head)=malloc(sizeof(Elemento));
		(*head)->next=NULL;
	}
	else {
		Lista holder;
		holder = malloc(sizeof(Elemento));
		holder->next=NULL;


		Lista el=*head;
		while(el->next!=NULL) el=el->next;
		
		el->next=holder;
	}
}

int getlenght(char var[40]){
	int lunghezza = 0;
	for(int i=39;i>-1;i--){
		if(var[i]!=' ' && !lunghezza) lunghezza++;
		else if(lunghezza) lunghezza++;
	}
	return lunghezza;
}

int checkpal(char var[40]){
	int lunghezza = getlenght(var);
	int pal=1;

	for(int i=0;i<((lunghezza/2)+1);i++)
		if(var[i]!=var[lunghezza-i-1]) pal=0;
	return pal;
}

int main(void) {
	int numb=0;
	scanf("%d", &numb);

	Lista var=NULL;
	char n=' ';

	for(int i=0;i<=numb;i++) add(&var);

	for(Lista el=var;el!=NULL;el=el->next){
		for(int j=0;j<40;j++){
			el->info[j] = ' ';
		}
	}

	for(Lista el=var;el!=NULL;el=el->next){
		for(int j=0;j<40;j++){
			scanf("%c", &n);
			if(n=='\n') j=41;
			else el->info[j] = n;
		}
	}

	int len = 0;
	for(Lista el=var;el!=NULL;el=el->next){
		if(checkpal(el->info)){
			len = getlenght(el->info);
			for(int j=0;j<len;j++){
				printf("%c", el->info[j]);
			}
			printf("\n");
		}
	}

	for(Lista el=var;el!=NULL;el=el->next){
		if(!checkpal(el->info)){
			len = getlenght(el->info);
			for(int j=0;j<len;j++){
				printf("%c", el->info[j]);
				if(j==len-1) printf("\n");
			}
		}
	}

	return 0;
}