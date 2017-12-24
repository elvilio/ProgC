#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;


void RecStampa(Lista *head){
	if(*head==NULL) printf("NULL");
	else if((*head)->next==NULL) printf("%d --> NULL\n", (*head)->info);
	else{
		printf("%d --> ", (*head)->info);
		RecStampa(&(*head)->next);
	}
}

void insertOrd(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;
	holder->next = NULL;

	if(*head == NULL) *head = holder;
	else {
		if((*head)->info>n){
			holder->next = *head;
			*head = holder;
		}
		else{
			Lista el=*head;
			while(el->next!=NULL && el->next->info<=n) el=el->next;
			if(el->next==NULL) el->next = holder;
			else{
				holder->next = el->next;
				el->next = holder;
			}
		}
	}
}

void Fusione(Lista *head, Lista *tomerge1, Lista *tomerge2){
	*head = *tomerge1;
	for(Lista el=*tomerge2; el!=NULL; el=el->next){
		insertOrd(head, el->info);
	}
}


int main(void){
	Lista var1=NULL, var2=NULL, var3=NULL;
	int n;


	scanf("%d", &n);
	while(n>=0){
		insertOrd(&var1, n);
		scanf("%d", &n);
	}

	scanf("%d", &n);
	while(n>=0){
		insertOrd(&var2, n);
		scanf("%d", &n);
	}

	Fusione(&var3, &var1, &var2);
	RecStampa(&var3);
	return 0;
}