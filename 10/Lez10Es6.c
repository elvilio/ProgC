#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
	int info;
	struct elem *next;
} elemento;
typedef elemento *Lista;

void addTesta(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(elemento));
	holder->info = n;

	holder->next = *head;
	*head = holder;
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

void RecStampaInversa(Lista *head){
	if(*head==NULL) return;
	if((*head)->next!=NULL) RecStampaInversa(&(*head)->next);
	printf("%d -> ", (*head)->info);
}

int main(void){
	Lista var=NULL;
	int n=0;

	scanf("%d", &n);
	while(n>=0){
		addTesta(&var, n);
		scanf("%d", &n);
	}

	RecStampaInversa(&var);
	printf("NULL");
}