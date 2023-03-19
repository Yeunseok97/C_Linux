#include <stdio.h>

int main(void){

	int u_num1, u_num2, sum=0;


	do{
		scanf("%d %d", &u_num1, &u_num2);
	}while(u_num1>u_num2);

	for(u_num1; u_num1<u_num2+1;u_num1++){
		sum += u_num1;
		}
	printf("%d",sum);


	return 0;
}
