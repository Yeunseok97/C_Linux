#include <stdio.h>

int main(void){

	int num, abs;
	printf("정수입력:");
	scanf("%d",&num);

	abs = num>0? num: num*(-1);
	printf("절대값 %d \n", abs);
	return 0;
}
