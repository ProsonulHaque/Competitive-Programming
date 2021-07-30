#include<stdio.h>

int main(void){
	
	int data_1 [5] = {1, 2, 3, 4, 5};
	int data_2 [] = {1, 2, 3};
	int i;
	for (i =0; i<5; i++){
		printf("%d\n", data_1[i]);
	}

	printf("- - - - - -\n");
		
	char data_3[3] = {'A', 'b', '@'};
	for (i =0; i<3; i++){
		printf("%c\n", data_3[i]);
	}

	printf("- - - - - -\n");

	char data_4[6] = "Hello5";
	for (i =0; i<6; i++){
		printf("%c\n", data_4[i]);
	}
	
	return 0;
}
