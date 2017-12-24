#include <stdio.h>

int main(void){
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a <= b){
		if (b <= c) printf("%d\n", c);
		else printf("%d\n", b);
	}
	else if (a<c) printf("%d\n", c);
	else printf("%d\n", a);
	return 0;
}
