#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	printf("On my system:\n");
	printf("Integer is %lu bytes long.\n", sizeof(int));
	printf("Long integer is %lu bytes long.\n", sizeof(long int));
	printf("Double is %lu bytes long.\n", sizeof(double));
	printf("Character is %lu bytes long.\n", sizeof(char));
	printf("Float is %lu bytes long.\n", sizeof(float));
	printf("Long double is %lu bytes long.\n", sizeof(long double));
	return 0;
}
