#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
	int info;
	struct elem *next;
} Elemento;
typedef Elemento *Lista;


void addOrd(Lista *head, int n){
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

Lista intersezione(Lista *head1, Lista *head2){
	Lista holder=NULL;
	Lista pointer=holder;
	int bo=0;
	for(Lista el=*head1; el!=NULL; el=el->next){
		for(Lista ek=*head2; ek!=NULL; ek=ek->next){
			if(holder==NULL && ((el->info)==(ek->info))){
				Lista add;
				add=malloc(sizeof(Elemento));
				add->info = el->info;
				add->next=NULL;
				holder=add;
			}
			bo = 0;
			for(Lista ej=holder; ej!=NULL; ej=ej->next){
				if((el->info)==(ek->info) && (ej->info)==(el->info)) bo++;
				if(ej->next==NULL) pointer = ej;
			}
			if(!bo && ((el->info)==(ek->info))){
				Lista add;
				add=malloc(sizeof(Elemento));
				add->info = el->info;
				add->next=NULL;
				pointer->next=add;
			}
		}
	}
	return holder;
}

void printList(Lista *head){
	for(Lista el=*head; el!=NULL; el=el->next) printf("%d\n", el->info);
}


int main(void){
	Lista var1=NULL, var2=NULL;
	int n=1;


	scanf("%d", &n);
	while(n>=0){
		addOrd(&var1, n);
		scanf("%d", &n);
	}

	scanf("%d", &n);
	while(n>=0){
		addOrd(&var2, n);
		scanf("%d", &n);
	}

	Lista var3=NULL;
	var3 = intersezione(&var1, &var2);

	printList(&var3);

	return 0;
}