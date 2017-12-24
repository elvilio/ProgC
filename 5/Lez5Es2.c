#include <stdio.h>

void multipli(int step, int limit){
	for(int i=step;i<=limit; i+=step){
		printf("%d\n", i);
	}
}

int main(void) {
	int limit=0, step=0;
	scanf("%d", &limit);
	scanf("%d", &step);

	multipli(step, limit);

	return 0;
}
