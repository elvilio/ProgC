#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *lista;

void addToTop(lista *head, int n){
	lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;

	holder->next = *head;
	*head = holder;
}

void RecStampa(lista *head){
	if((*head)->next==NULL) printf("%d -> NULL", (*head)->info);
	else{
		printf("%d -> ", (*head)->info);
		RecStampa(&(*head)->next);
	}
}


void insert(lista *head){
	if (*head==NULL) return;
	else if ((*head)->next==NULL){
		if((*head)->info%2==1) return;
		else {
			lista a;
			a=malloc(sizeof(Elemento));
			a->next=*head;
			a->info=-1;

			*head = a;
		}
	}
	else if ((*head)->info%2==0){
		lista a;
		a=malloc(sizeof(Elemento));
		a->next=*head;
		a->info=-1;

		*head = a;
		insert(&(*head)->next->next);
	}
	else insert(&(*head)->next);
}



int main(void){
	lista var=NULL;
	int n;

	scanf("%d", &n);
	while(n>=0){
		addToTop(&var, n);
		scanf("%d", &n);
	}

	insert(&var);
	RecStampa(&var);

	return 0;
}