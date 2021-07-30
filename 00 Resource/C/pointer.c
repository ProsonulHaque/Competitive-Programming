#include<stdio.h>

int main(void){
	
	int data [5] = {1, 2, 3, 4, 5};
	int i, sum=0;
	int *ptr_to_sum = &sum;
	
	for (i =0; i<5; i++){
		printf("%d\n", data[i]);
	}

	printf("- - - - - -\n");
	
	for (i=0; i<5; i++){
		sum = sum + data[i];
	}
	
	printf("Sum = %d \n", sum);	
	printf("Average = %.2f \n", sum/5.0);
	
	printf("Sum is located at %p or in other word at %lu and is %d", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
			
	return 0;
}
