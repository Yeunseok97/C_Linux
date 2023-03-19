#include <stdio.h>

int main(void){

	int dan = 1, cur;

	for(dan; dan<10; dan++){
		cur = 1;
		for(cur; cur<10; cur++){
			printf("%d X %d = %d\n",dan, cur, dan * cur);
		}
	}
	return 0;
}
