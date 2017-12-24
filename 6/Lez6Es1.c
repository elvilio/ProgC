#include <stdio.h>

void ordered_swap(int *ap, int *bp, int *cp){
	int holder1=*ap, holder2=*bp, holder3=*cp;

	if(holder1<holder2){
		if(holder1<=holder3){
			if(holder3<holder2){*cp=holder2; *bp=holder3;}
		}
		if(holder3<holder1){*ap=holder3; *bp=holder1; *cp=holder2;}
	}
	if(holder2<=holder1){
		if(holder1<holder3){*ap=holder2; *bp=holder1; *cp=holder3;}
		if(holder3<=holder1){
			if(holder2<holder3){*ap=holder2; *bp=holder3; *cp=holder1;}
			if(holder3<=holder2){*ap=holder3; *bp=holder2; *cp=holder1;}
		}
	}
}

int main(void) {
	int primo=0,secondo=0,terzo=0;
	scanf("%d", &primo);
	scanf("%d", &secondo);
	scanf("%d", &terzo);
	int *a=&primo, *b=&secondo, *c=&terzo;

	ordered_swap(a, b, c);
	printf("%d\n%d\n%d", primo, secondo, terzo);

	return 0;
}
