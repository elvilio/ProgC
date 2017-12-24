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
	if((*head)==NULL){
		printf("NULL\n");
		return;
	}
	else if((*head)->next==NULL) printf("%d -> NULL\n", (*head)->info);
	else{
		printf("%d -> ", (*head)->info);
		RecStampa(&(*head)->next);
	}
}

void deleteMult(lista *head, int n){
	if ((*head)==NULL) return;
	else if ((*head)->next==NULL){
		if((*head)->info!=0 && (*head)->info%n!=0) return;
		else{
			free(*head);
			*head = NULL;
			return;
		}
	}
	else if ((*head)->info==0 || (*head)->info%n==0){
		lista a;
		a = *head;

		*head = (*head)->next;
		free(a);
		deleteMult(head, n);
		return;
	}
	else{
		deleteMult(&(*head)->next, n);
		return;
	}
}

int main(void){
	lista var=NULL;
	int n, i;

	scanf("%d", &i);
	scanf("%d", &n);
	while(n>=0){
		addToTop(&var, n);
		scanf("%d", &n);
	}

	deleteMult(&var, i);
	RecStampa(&var);

	return 0;
}