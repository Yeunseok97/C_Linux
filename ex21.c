#include <stdio.h>

int main(void){
	int user_num1, user_num2;
	int user_num3, user_num4;
	int result;

	scanf("%d %d %d %d", &user_num1, &user_num2, &user_num3, &user_num4);

	result = (user_num3 - user_num1)*(user_num4-user_num2);
	printf("%d",result);

	return 0;

}
