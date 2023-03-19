#include <stdio.h>

int main(void){

	int u_num, factorial=1;

	scanf("%d",&u_num);

	while(u_num>1){

		factorial *= u_num;
		u_num--;
	}

	printf("%d",factorial);

	return 0;
}
		



