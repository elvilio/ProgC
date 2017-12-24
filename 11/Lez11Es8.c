#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;


void insertOrd(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;
	holder->next = NULL;

	if(*head == NULL) *head = holder;
	else {
		if((*head)->info<n){
			holder->next = *head;
			*head = holder;
		}
		else{
			Lista el=*head;
			while(el->next!=NULL && el->next->info>=n) el=el->next;
			if(el->next==NULL) el->next = holder;
			else{
				holder->next = el->next;
				el->next = holder;
			}
		}
	}
}

void completamento(Lista *head){
	if(*head==NULL) return;

	int n=(*head)->info;
	Lista el=*head;


	while(el->next!=NULL){
		if(el->info==n) n--;
		else if(el->info>n && el->next->info<n) {
			insertOrd(head, n);
			n--;
		}
		else if(el->next->info>=n) el=el->next;
	}
}

void RecStampa(Lista *head){
	if(*head==NULL) printf("NULL");
	else if((*head)->next==NULL) printf("%d --> NULL\n", (*head)->info);
	else{
		printf("%d --> ", (*head)->info);
		RecStampa(&(*head)->next);
	}
}


int main(void){
	Lista var=NULL;
	int n;


	scanf("%d", &n);
	while(n>=0){
		insertOrd(&var, n);
		scanf("%d", &n);
	}

	completamento(&var);
	RecStampa(&var);

	return 0;
}