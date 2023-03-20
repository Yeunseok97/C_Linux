#include <stdio.h>

int main(void){

	int abs, num;

	printf("정수입력 ");
	scanf("%d", &num);

	abs = num>0?num:num*(-1);
	printf("%d",abs);
}
