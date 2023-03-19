#include <stdio.h>

int main(void){
	int user_num;
	int num = 1;
	int sum = 0;
	int input_num;

	printf("몇 개의 정수를 입력하실겁니까?");
	scanf("%d",&user_num);

	while (num <= user_num){
		scanf("%d",&input_num);
		sum += input_num;
		num++;}

	printf("입력한 정수들의 평균은 %f 입니다\n", (double)sum/user_num);

	return 0;
}

