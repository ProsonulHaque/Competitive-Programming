#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int array[], int size){
	int i, j, index, smallest;
	
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
			swap(&array[index], &array[i]);
		}
	}
}

int main(void){
	int i, j;
	const int size = 5;
	int array [5] = {1, 5, 2, 9, 10};
	
	printf("Unsorted Array\n");
	for (i=0; i<size; i++){
		printf("%d \t", array[i]);
	}
	
	sort(array, size);
	
	printf("\n\nSorted Array\n");
	for (i=0; i<size; i++){
		printf("%d \t", array[i]);
	}
	
	return 0;
}
