#include <stdio.h>
#define NUM 2

typedef struct {
	int codice;
	int mese;
	int anno;
	int stipendio;
} Dipendente;

void getdip(Dipendente *dip, int num){
	for(int i=0;i<num;i++){
		scanf("%d", &dip[i].codice);
		scanf("%d", &dip[i].mese);
		scanf("%d", &dip[i].anno);
		scanf("%d", &dip[i].stipendio);
	}
}

void aumentostip(Dipendente *dip, int num, int percentuale){
	int holdertime=0;
	for(int i=0;i<num;i++){
		holdertime = dip[i].anno*12 + dip[i].mese;
		if(holdertime<24005){
			dip[i].stipendio += ((float) dip[i].stipendio)*percentuale/100;
		}
	}
}

int main(void) {
	Dipendente dipendenti[2];
	int perc=0;

	getdip(dipendenti, NUM);
	scanf("%d", &perc);

	aumentostip(dipendenti, NUM, perc);

	for(int i=0;i<NUM;i++){
		if(dipendenti[i].stipendio>1200) printf("%d %d\n", dipendenti[i].codice, dipendenti[i].stipendio);
	}

	return 0;
}
