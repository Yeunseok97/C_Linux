#include <stdio.h>

int main(void){
	int user_num;
	int num = 9;

	printf("몇 단?");
	scanf("%d",&user_num);

	while (num>0){
		printf("%d X %d = %d\n",user_num, num, user_num * num);
		num--;}
	return 0;
}
