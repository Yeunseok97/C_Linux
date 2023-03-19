#include <stdio.h>

int main(void){
	int dan;
	int num =0;
	scanf("%d", &dan);

	while (num<=9){
		printf("%d X %d = %d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}
