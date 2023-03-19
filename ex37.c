#include <stdio.h>

int main(void){
	int dan = 1, cur = 0;

	do{
		cur = 1;
		do{
			printf("%dX%d = %d\n",dan, cur, dan*cur);
		}while(cur++<9);
		dan++;
	}while(dan<10);
	return 0;
}

