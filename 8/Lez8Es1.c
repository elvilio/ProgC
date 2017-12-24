#include <stdlib.h>
#include <stdio.h>

typedef struct elemento{
	int info;
	struct elemento * next;
} ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;


void insertFirst(ListaDiElementi *head, int n){
	ListaDiElementi new;
	new = malloc(sizeof(ElementoDiLista));

	new->info = n;
	new->next = NULL;

	new->next = *head;
	*head = new;
}


void deleteFirst(ListaDiElementi *head){
	if(*head != NULL){
		ListaDiElementi a;
		a = *head;
		*head = (*head)->next;
		free(a);
	}
}


void printList(ListaDiElementi *head){
	for(ListaDiElementi el= *head; el!=NULL; el=el->next){
		printf("%d\n", el->info);
	}
}


int main(void){
	ListaDiElementi var = NULL;
	int holder=1;

	while(holder>=0){
		scanf("%d", &holder);
		if(holder>0) insertFirst(&var, holder);
		else if(holder==0) deleteFirst(&var);
	}
	printList(&var);

	return 0;
}