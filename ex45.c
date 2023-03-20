#include <stdio.h>

int main(void){

	int seven =7, nine = 9;
	int num=1;

	for(num*seven;num*seven<=100;num++){
		printf("%d\n",num*seven);
	}
	num =1;
	for(num*nine; num*nine<=100; num++){
		if(num*nine % 7 != 0)
			printf("%d\n",num*nine);
	}
	return 0;
}
