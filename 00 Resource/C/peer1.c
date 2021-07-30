/*a program that can give the sine of a value between 0 and 1 (non inclusive)*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double x, sine_value;
	printf("Enter angle in radian:");//as sin, built in function takes values in radian 
	scanf("%lf", &x);
	sine_value = sin(x); // sin is a built in function and it returns value in radian
	if (sine_value > 0 && sine_value < 1) //if-else statement is used because of the range of sine value given in the question which is between 0 to 1
	{
		printf("Sine of you entered value is %lf\n", sine_value); //print our expected value
	}
	else
	{
		printf("Sine value is not between 0 and 1.\n\n"); //as required value between 0 and 1
	}
	return 0;
}
