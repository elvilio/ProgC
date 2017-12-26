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
void stamp(Albero *head);


int main(void){
	Albero var=NULL;
	int n = 0, lenght=1;
	scanf("%d", &lenght);

	for(int i=0;i<lenght;i++){
		scanf("%d", &n);
		insert(&var, n);
	}

	stamp(&var);

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

void stamp(Albero *head){
	if(*head==NULL) return;
	else{
		stamp(&(*head)->sx);
		printf("%d\n", (*head)->info);
		stamp(&(*head)->dx);
	}
}