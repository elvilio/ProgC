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
	for(Lista el=*head;el!=NULL;el=el->next){
		if(el->next==NULL) printf("%d -> NULL", el->info);
		else printf("%d -> ", el->info);
	}
}


int main(void){
	Lista var=NULL;
	int n=0;
	scanf("%d", &n);
	while(n>=0){
		addTesta(&var, n);
		scanf("%d", &n);
	}
	RecStampa(&var);

}