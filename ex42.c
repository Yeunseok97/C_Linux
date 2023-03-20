#include <stdio.h>

int main(void){

	int num;
	printf("정수입력\n");
	scanf("%d", &num);

	if(num<0)
		printf("0보다작다");
	if(num>0)
		printf("0보다크다");
	if(num==0)
		printf("0이다");
	return 0;
}
