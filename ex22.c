#include <stdio.h>

int main(void){
	double num1, num2;

	double result1, result2, result3, result4;

	scanf("%lf %lf",&num1, &num2);

	result1 = num1 + num2;
	result2 = num1 - num2;
	result3 = num1 * num2;
	result4 = num1 / num2;

	printf("%f\n%f\n%f\n%f", result1, result2, result3, result4);
	return 0;
}
