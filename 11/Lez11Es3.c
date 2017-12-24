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

void RecStampa(Lista *head){
	if(*head==NULL) printf("NULL");
	else if((*head)->next==NULL) printf("%d -> NULL", (*head)->info);
	else{
		printf("%d -> ", (*head)->info);
		RecStampa(&(*head)->next);
	}
}

void DeleteFirstN(Lista *head, int n){
	Lista to_del=NULL;
	while(n>0){
		to_del = *head;
		*head = (*head)->next;
		free(to_del);
		n--;
		if(*head==NULL) n = 0;
	}
}


int main(void){
	Lista var=NULL;
	int n, i;

	scanf("%d", &n);

	while(n>=0){
		AddBottom(&var, n);
		scanf("%d", &n);
	}
	scanf("%d", &i);

	DeleteFirstN(&var, i);

	RecStampa(&var);
}