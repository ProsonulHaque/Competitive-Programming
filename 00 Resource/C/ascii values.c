#include<stdio.h>

int main(void){
	char c = 'a';
	
	printf("c in ASCII is: %d \n", c);
	printf("c is the character: %c \n", c);
	printf("Three consecutive letters are: %c%c%c \n", c, c+1, c+2);
	printf("Three bell rings are: %c%c%c \n", '\a', '\a', '\a');
	return 0;
}
