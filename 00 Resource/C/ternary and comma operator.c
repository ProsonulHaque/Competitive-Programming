#include<stdio.h>

int main(void){
	int a, sum, i;
	
	//Ternary Operator
	printf("Enter the value of a: ");
	scanf("%d", &a);
	a = a>=0 ? a:-1;
	printf("%d\n", a);
	printf("-----------------------------\n");
	
	//Comma Operator
	for(sum=0, i=1; i<=50; i++)
		sum += i;
	printf("Sum = %d", sum);
	
	return 0;
}
