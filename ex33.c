#include <stdio.h>

int main(void){

	int num =0, sum = 0;
	int user_num;

	printf("정수 다섯개를 입력받을건데 1이상만 입력하세요\n");
	while (num++<5){
		scanf("%d", &user_num);
		while(user_num<1){
			printf("1보다 작습니다 다시 입력하세요\n");
			scanf("%d",&user_num);}
		sum += user_num;
	}
	printf("입력하신 수의 총 합은%d\n", sum);
	return 0;
}



