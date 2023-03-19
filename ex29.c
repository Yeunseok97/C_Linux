#include <stdio.h>

int main(void){
	int user_num;
	int num = 1;

	scanf("%d", &user_num);

	while(num <= user_num){
		printf("%d X %d = %d\n",3, num,3*num);
		num++;}
}

