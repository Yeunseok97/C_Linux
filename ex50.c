#include <stdio.h>

int main(void){

	int num;

	printf("start!\t");

	for (num=1; num<10; num++){
		if(num%2 == 0 || num%3 == 0)
			continue;
			printf("%d", num);

		}
	printf("\tend!\n");
	return 0;
}
