#include <stdio.h>

int main(void){
	long number_numbers;
	scanf("%ld", &number_numbers);
	number_numbers = number_numbers * sizeof(int);
	printf("%ld\n", number_numbers);
	return 0;
}
