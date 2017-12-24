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

void InserisciDopoQuarto(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;
	holder->next = NULL;

	Lista el=*head;
	int count=0;

	if(*head==NULL) *head = holder;
	else{
		while(count<3 && el->next!=NULL){
			el=el->next;
			count++;
		}
		if(el->next==NULL) el->next=holder;
		else {
			holder->next = el->next;
			el->next = holder;
		}
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


int main(void){
	Lista var=NULL;
	int n, i;

	scanf("%d", &n);

	while(n>=0){
		AddBottom(&var, n);
		scanf("%d", &n);
	}
	scanf("%d", &i);

	InserisciDopoQuarto(&var, i);

	RecStampa(&var);
}