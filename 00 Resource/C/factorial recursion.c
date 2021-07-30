#include<stdio.h>

int fact(int);

int main(void){
	
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Factorial of %d is %d", num, fact(num));
	return 0;
}

int fact(int n){
	
	static int f = 1;
	
	if (n>0){
		f = f * n;
		fact(n-1);
	}
	else{
		return f;
	}
}

