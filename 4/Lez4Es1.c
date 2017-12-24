#include <stdio.h>

int main(void) {
	int holder[10]={0};
	int i=0;

	for(i=0; i<10; i++) scanf("%d", &holder[i]);

	for(i=0; i<10; i++){
		if (holder[i]%2==0){
			holder[i]=holder[i]/2;
		}
	}

	for(i=0; i<10; i++) printf("%d\n", holder[9-i]);

	return 0;
}
