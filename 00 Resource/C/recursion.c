#include<stdio.h>

int main(void){
    recursion(5);
    return 0;
}

int recursion(int n){
	if(n==0){
		printf("Game Over!");
	}
	else{
		printf("Attempt: %d\n", n);
		recursion(n-1);
	}
	return 0;
}
