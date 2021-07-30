#include<stdio.h>
void swap(int *a, int *b);

int main(void){
	int m=5, n=7;
	swap(&m, &n);
	printf("m = %d, n = %d", m, n);
	return 0;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}
