#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
	struct elem *dx;
	struct elem *sx;
	int info;
} Elemento;
typedef Elemento *Albero;

// function declaration
void insert(Albero *head, int value);
int altezza(Albero *head);
int max(int a, int b);


int main(void){
	Albero var=NULL;
	int n = 0, lenght=1;
	scanf("%d", &lenght);

	for(int i=0;i<lenght;i++){
		scanf("%d", &n);
		insert(&var, n);
	}

	printf("%d\n", altezza(&var));

	return 0;
}

void insert(Albero *head, int value){
	Albero holder;
	holder = malloc(sizeof(Elemento));
	holder->dx = NULL;
	holder->sx = NULL;
	holder->info = value;
	
	if(*head==NULL) *head = holder;
	else{
		Albero el=*head;
		int guardia = 1;
		while(guardia){
			if(el->info>value && el->sx==NULL){
				el->sx=holder;
				guardia--;
			}
			else if(el->info<=value && el->dx==NULL){
				el->dx=holder;
				guardia--;
			}
			else if(el->info>value) el=el->sx;
			else el=el->dx;
		}
	}
}

int altezza(Albero *head){
	if(*head==NULL) return 0;
	if((*head)->dx==NULL && (*head)->sx!=NULL) return 1 + altezza(&(*head)->sx);
	else if((*head)->sx==NULL && (*head)->dx!=NULL) return 1 + altezza(&(*head)->dx);
	else return 1 + max(altezza(&(*head)->dx), altezza(&(*head)->sx));
}

int max(int a, int b){
	if(a>b) return a;
	else return b;
}