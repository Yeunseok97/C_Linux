#include <stdio.h>

int main(void){

	int user_num1, user_num2;
	int abs;

	scanf("%d %d",&user_num1, &user_num2);
	
	abs = user_num1>user_num2? user_num1-user_num2:(user_num1-user_num2)*(-1);
	printf("%d\n",abs);

	return 0;
}
