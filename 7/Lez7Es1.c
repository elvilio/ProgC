#include <stdio.h>
#define NUM 4

typedef enum {crocchette, scatolette, tonnoscatola} Cibo;

typedef struct datigatto{
	int codice;
	int eta;
	float kg;
	Cibo cibo;
} Dati;

void getstuff(Dati *gatto, int num){
	for(int i=0;i<num;i++){
		scanf("%d", &gatto[i].codice);
		scanf("%d", &gatto[i].eta);
		scanf("%f", &gatto[i].kg);
		scanf("%d", &gatto[i].cibo);
	}
}

void controllhealth(Dati *gatto, int num){
	float media=0;

	for(int i=0;i<num;i++){
		media += gatto[i].kg;
	}

	media = media/num;

	for(int i=0;i<num;i++){
		if(gatto[i].eta<4 && gatto[i].kg>media){
			printf("%d ", gatto[i].codice);
			switch(gatto[i].cibo){
				case 0: printf("crocchette\n"); break;
				case 1: printf("scatolette\n"); break;
				case 2: printf("tonno\n"); break;
			}
		}
	}
}

int main(void) {
	Dati Gatti[4];
	getstuff(Gatti, NUM);
	controllhealth(Gatti, NUM);
	return 0;
}
