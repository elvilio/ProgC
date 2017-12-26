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
int find(Albero *head, int value);

int main(void){

	Albero var=NULL;
	int n = 0, lenght=1;
	scanf("%d", &lenght);

	for(int i=0;i<lenght;i++){
		scanf("%d", &n);
		insert(&var, n);
	}

	int some = 0;
	n=0;
	while(!some){
		scanf("%d", &n);
		if(n<0) some++;
		else{
			n = find(&var, n);
			if(n==-1) printf("NO\n");
			else printf("%d\n", n);
		}
	}

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

int find(Albero *head, int value){
	Albero el=*head;
	int count=0, guardia=1;
	while(guardia){
		if(el==NULL){
			guardia--;
			count = -1;
		}
		else if(el->info>value){
			el=el->sx;
			count++;
		}
		else if (el->info<value){
			el=el->dx;
			count++;
		}
		else guardia--;
	}
	return count;
}