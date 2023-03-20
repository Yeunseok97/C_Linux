#include <stdio.h>

int main(void){

	int dan = 2, cur =1, num = 1;
	int i;

		while(num<9){
			cur =1;
			if(dan%2 ==0 & dan<10){
				for (dan; cur<dan+1; cur++)
					printf("%dX%d = %d \n",dan, cur, dan*cur);
				num++;
	}
			dan++;
		}

	return 0;
}
