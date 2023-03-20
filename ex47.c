#include <stdio.h>

int main(void){

	int Korean, math, English;
	int result;

	printf("국어 수학 영어 순서대로 점수 입력하십쇼");
	scanf("%d %d %d",&Korean, &math, &English);
	
	result = (Korean + math + English)/3;

	if(result>=90)
		printf("A: %d",result);

	if(result>=80 & result<90)
		printf("B: %d",result);

	if(result>=70 & result<80)
		printf("C: %d",result);

	if(result>=50 & result<70)
		printf("D: %d",result);

	if(result>=0 & result<50)
		printf("F: %d",result);

	return 0;
}
	
