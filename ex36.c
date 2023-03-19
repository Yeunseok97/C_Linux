#include <stdio.h>

int main(void){
	int total = 0, even = 0;
	do{
		total += even;
		even += 2;
	}while(even<=100);
	printf("%d",total);
	return 0;
}

