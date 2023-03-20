#include <stdio.h>

int main(void){

	int dan =2, cur =1, num =1;

	while(1){
		cur = 1;

			for (dan; cur<dan+1; cur++){
				if(dan %2 != 0){
					continue;}
				printf("%dX%d = %d \n", dan, cur, dan*cur);
			num++;
			}
		dan++;
		if (dan == 10)
			break;
	}

	return 0;
}

