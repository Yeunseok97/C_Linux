#include <stdio.h>

int main(void){

	int user_num1, user_num2;
	int result;

	scanf("%d %d", &user_num1, &user_num2);

	if(user_num1 >= user_num2)
		printf("%d", user_num1-user_num2);

	else
		printf("%d", user_num2-user_num1);
	return 0;
}
