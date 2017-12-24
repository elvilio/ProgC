#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;

void AddBottom(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;
	holder->next = NULL;

	if(*head==NULL) *head = holder;
	else {
		Lista el=*head;
		while(el->next!=NULL){
			el=el->next;
		}
		el->next = holder;
	}
}

int pari(Lista *head){
	int n=-1;
	for(Lista el=*head; el!=NULL; el=el->next){
		if(el->info%2==0){
			n = el->info;
			return n;
		}
	}
	return -1;
}

int dispari(Lista *head){
	int n=-1;
	for(Lista el=*head; el!=NULL; el=el->next){
		if(el->info%2==1){
			n = el->info;
			return n;
		}
	}
	return -1;
}


int main(void){
	Lista var=NULL;
	int n;

	scanf("%d", &n);

	while(n>=0){
		AddBottom(&var, n);
		scanf("%d", &n);
	}

	printf("%d\n", dispari(&var));
	printf("%d\n", pari(&var));
}