#include <stdio.h>

int main(void){

	int a, z;

	for(a=0;a<10;a++){
		for(z=0;z<10;z++){
			if(a==z)
				continue;
			if((10*a+z) +(10*z+a)==99)
				printf("%d, %d, %d, %d\n", a, z, z, a);
				
				}
				}
	return 0;
}




	
