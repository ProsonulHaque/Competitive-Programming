#include<stdio.h>

int main(void){
	int num = 5;
	int *ptr = &num;
	printf("%lu", *ptr);
	return 0;
}
