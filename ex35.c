#include <stdio.h>

int main(void){

	int sum = 0, num =0;

	do{
		printf("정수입력0 to quit");
		scanf("%d", &num);
		sum += num;
	}while(num!=0);
	printf("%d",sum);
	return 0;
}
