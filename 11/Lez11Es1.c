#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;


void AddTop(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;
	holder->next = NULL;

	if(*head==NULL) *head = holder;
	else {
		holder->next = *head;
		*head = holder;
	}
}

int CalcoloSomma(Lista *head){
	int n=0;
	for(Lista el=*head; el!=NULL; el=el->next){
		n += el->info;
	}
	return n;
}

int CalcoloNElementi(Lista *head){
	int n = CalcoloSomma(head), num=0;
	for(Lista el=*head; el!=NULL; el=el->next){
		if((el->info)>(n/4)) num++;
	}
	return num;
}


int main(void){
	Lista var=NULL;
	int n;

	scanf("%d", &n);

	while(n>=0){
		AddTop(&var, n);
		scanf("%d", &n);
	}

	printf("%d\n", CalcoloSomma(&var));
	printf("%d\n", CalcoloNElementi(&var));

	return 0;
}