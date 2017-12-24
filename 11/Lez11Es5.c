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

int inside(Lista *head, int n){
	if(*head==NULL) return 0;
	else if((*head)->info == n) return 1;
	else return inside(&(*head)->next, n);
}

int Prod(Lista *head, int first, int last){
	if(*head==NULL) return -1;
	else if((*head)->info != first){
		if((*head)->next==NULL) return 1;
		else return Prod(&(*head)->next, first, last);
	}
	else{
		Lista el=(*head)->next;
		int toret=1;
		while(el->info != last && el->next!=NULL){
			if(el->info >= last) el=el->next;
			else{
				toret *= el->info;
				el=el->next;
			}
		}
		return toret;
	}
}

int main(void){
	Lista var=NULL;
	int n, first, last;

	scanf("%d", &first);
	scanf("%d", &last);

	scanf("%d", &n);

	while(n>=0){
		if(!inside(&var, n)) AddBottom(&var, n);
		scanf("%d", &n);
	}

	printf("%d\n", Prod(&var, first, last));
	return 0;
}