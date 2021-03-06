/*
Sine Calculator
Prosonul Haque
27 July 2020
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(void){
	
	double input_degree, input_radian, result;

	//Take input from user in degree.	
	printf("Enter the angle in degree: ");
	scanf("%lf", &input_degree);
	
	//Convert into radian and calculate value.
	input_radian = PI*input_degree/180;
	result = sin(input_radian);
	
	//Print output if it meets the criteria (value between 0 and 1 (non inclusive)).
	if(result>0 && result<1){
		printf("Sin(%lf) = %lf", input_degree, result);
	}
	else{
		printf("Result not in range!");
	}
}
