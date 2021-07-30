#include<stdio.h>

int main(void){
	int i, j, smallest, index, size = 5;
	int array [5] = {1, 5, 2, 9, 0};
	
	printf("Unsorted Array \n");
	for (i=0; i<size; i++){
		printf("%d \t", array[i]);
	}
	
	for (i=0; i<(size-1); i++){
		smallest = array[i];
		index = -1;
		for (j=i+1; j<size; j++){
			if (array[j]<smallest){
				smallest = array[j];
				index = j;
			}
		}
		if (index!=-1){
			array[index] = array[i];
			array[i] = smallest;
		}
	}
	
	printf("Sorted Array \n");
	for (i=0; i<size; i++){
		printf("%d \t", array[i]);
	}
	
	return 0;
}
