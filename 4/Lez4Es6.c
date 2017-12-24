#include <stdio.h>

int main(void) {
	long n=1;
	scanf("%ld", &n);
	long first=0, second=1, holder=1;

	printf("%ld\n", first);

	while(holder<=n){
		printf("%ld\n", holder);
		holder = first + second;
		first = second;
		second = holder;
	}

	return 0;
}
