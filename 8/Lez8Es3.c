#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;


void insertOrd(Lista *head, int n){
	Lista prev, nxt, holder;
	holder=malloc(sizeof(Elemento));
	holder->info=n;
	holder->next=NULL;

	if(*head==NULL) *head=holder;
	else if((*head)->next==NULL){
		if((*head)->info>n){
			prev=*head;
			*head=holder;
			holder->next=prev;
		}
		else if((*head)->info<=n){
			(*head)->next=holder;
		}
	}
	else{
		nxt=*head;
		prev=*head;
		int found=0;
		if((*head)->info>n){
			*head=holder;
			holder->next=prev;
			found++;
		}
		while(nxt!=NULL && !found){
			if(nxt->info>n){
				//insert into list
				prev->next=holder;
				holder->next=nxt;
				found++;
			}
			else{
				//iterate
				prev=nxt;
				nxt=nxt->next;
			}
		}
		if(!found){
			prev->next=holder;
		}
	}
}

void printList(Lista *head){
	for(Lista el=*head; el!=NULL; el=el->next) printf("%d\n", el->info);
}


int main(void) {
	Lista var=NULL;
	int n=0;

	scanf("%d", &n);
	while(n>=0){
		insertOrd(&var, n);
		scanf("%d", &n);
	}
	printList(&var);
	return 0;
}