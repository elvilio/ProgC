#include <stdio.h>

typedef  struct persona {
	char nome[10];
	struct persona *mamma;
	struct persona *babbo;
}  Persona;

void procedura(Persona pers){
	printf("%.10s\n", pers.nome);
	if(pers.mamma == NULL) printf("Sconosciuto");
	else printf("%.10s", (*pers.mamma).nome);
	if(pers.babbo == NULL) printf("Sconosciuto\n");
	else printf("%.10s\n", (*pers.babbo).nome);
}


int main(void) {
	Persona familiare1;
	Persona familiare2;
	Persona familiare3;
	int i=0;

	while(i<10){
		scanf("%c", &familiare1.nome[i]);
		i++;
	}
	i=0;

	while(i<10){
		scanf("%c", &familiare2.nome[i]);
		i++;
	}
	i=0;
	familiare1.mamma = &familiare2;
	familiare2.mamma = NULL;
	familiare2.babbo = NULL;

	while(i<10){
		scanf("%c", &familiare3.nome[i]);
		i++;
	}
	familiare1.babbo = &familiare3;
	familiare3.mamma = NULL;
	familiare3.babbo = NULL;

	procedura(familiare1);
	procedura(familiare2);
	procedura(familiare3);

	return 0;
}
