#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;


void insFondo(Lista *head, int n){
	Lista holder;
	holder = malloc(sizeof(Elemento));
	holder->info = n;
	holder->next = NULL;

	if(*head==NULL) *head=holder;
	else if((*head)->next==NULL) (*head)->next=holder;
	else{
		Lista el=*head;
		while(el->next!=NULL){
			el=el->next;
		}
		el->next = holder;
	}
}

void insTesta(Lista *head, int n){
	Lista holder;
	holder=malloc(sizeof(Elemento));
	holder->info=n;
	Lista a;
	a=*head;

	*head=holder;
	holder->next=a;
}

void delFirstOcc(Lista *head, int n){
	Lista prev, el=*head;
	int b=1;
	if(*head!=NULL && (*head)->info==n){
		prev=*head;
		*head=(*head)->next;
		free(prev);
	}
	else if(*head!=NULL){
		while(b && el->next!=NULL){
			prev = el;
			el=el->next;
			if(el->info==n) b--;
		}
		if(!b){
			prev->next=el->next;
			free(el);
		}
	}
}

void printList(Lista *head){
	for(Lista el=*head; el!=NULL; el=el->next) printf("%d\n", el->info);
}

 
int main(void){
	Lista var=NULL;
	int n=1;
	while(n!=0){
		scanf("%d", &n);
		if(n<0) delFirstOcc(&var, -n);
		else if(n%2==0 && n!=0) insTesta(&var, n);
		else if(n%2==1) insFondo(&var, n);
	}
	printList(&var);
	
	return 0;
}