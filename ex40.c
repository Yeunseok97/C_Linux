#include <stdio.h>

int main(void){

	int u_num, factorial =1;

	scanf("%d", &u_num);

	for(u_num; u_num>1; u_num--){
		factorial *= u_num;}
	printf("%d\n",factorial);
	return 0;
}
