#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
	int info;
	struct elem *next;
} elemento;
typedef elemento *Lista;

typedef enum{false,true} boolean;

void addTesta(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(elemento));
	holder->info = n;

	holder->next = *head;
	*head = holder;
}

void addCoda(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(elemento));
	holder->info = n;
	holder->next = NULL;

	if(*head==NULL){
		*head = holder;
	}
	else{
		Lista el=*head;
		while(el->next!=NULL)	el=el->next;
		el->next = holder;
	}

}

void RecStampa(Lista *head){
	if((*head)->next==NULL) printf("%d -> NULL", (*head)->info);
	else{
		printf("%d -> ", (*head)->info);
		RecStampa(&(*head)->next);
	}
}

int RecLength(Lista *head){
	if (*head==NULL) return 0;
	else if ((*head)->next==NULL) return 1;
	else return RecLength(&(*head)->next)+1;
}

void RecStampaInversaIns(Lista *head){
	if(*head==NULL) return;
	if((*head)->next!=NULL) RecStampaInversaIns(&(*head)->next);
	printf("%d -> ", (*head)->info);
}

void RecStampaInversa(Lista *head){
	RecStampaInversaIns(head);
	printf("NULL");
}

boolean isOrdered(Lista *head){
	if((*head)->next==NULL) return true;
	else if ((*head)->info<(*head)->next->info){
		return isOrdered(&(*head)->next);}
	else return false;
}

int main(void){
	Lista var=NULL;
	int n=0;

	scanf("%d", &n);
	while(n>=0){
		addCoda(&var, n);
		scanf("%d", &n);
	}

	if(isOrdered(&var)) printf("True");
	else printf("False");
}