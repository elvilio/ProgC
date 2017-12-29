#include <stdio.h>

// function declaration

int main(void){
	int n;
	scanf("%d", &n);

	int str0=(n%10), str1=(int)(n/10);

	if(str0 == 1){
		switch(str1){
			case 2: printf("ventuno"); break;
			case 3: printf("trentuno"); break;
			case 4: printf("quarantuno"); break;
			case 5: printf("cinquantuno"); break;
			case 6: printf("sessantuno"); break;
			case 7: printf("settantuno"); break;
			case 8: printf("ottantuno"); break;
		}
	}
	else if(str0 == 8){
		switch(str1){
			case 2: printf("ventotto"); break;
			case 3: printf("trentotto"); break;
			case 4: printf("quarantotto"); break;
			case 5: printf("cinquantotto"); break;
			case 6: printf("sessantotto"); break;
			case 7: printf("settantotto"); break;
			case 8: printf("ottantotto"); break;
		}
	}
	else{
		switch(str1){
			case 2: printf("venti"); break;
			case 3: printf("trenta"); break;
			case 4: printf("quaranta"); break;
			case 5: printf("cinquanta"); break;
			case 6: printf("sessanta"); break;
			case 7: printf("settanta"); break;
			case 8: printf("ottanta"); break;
		}
		switch(str0){
			case 2: printf("due"); break;
			case 3: printf("tre"); break;
			case 4: printf("quattro"); break;
			case 5: printf("cinque"); break;
			case 6: printf("sei"); break;
			case 7: printf("sette"); break;
		}
	}
	return 0;
}