#include<stdio.h>

int main(void){
	int speed;
	
	printf("Speed? : ");
	scanf("%d", &speed);
	
	speed = (speed<0) ? (0):(speed<=50) ? (50): (speed<=60) ? (60): (speed<=70) ? (70): (80);
	
	switch(speed){
		case 0: printf("Invalid Speed");
			break;
		case 50: printf("Hurrah! No ticket");
			break;
		case 60: printf("$50 ticket");
			break;
		case 70: printf("$100 ticket");
			break;
		case 80: printf("$500 ticket");
			break;
		default: printf("Invalid Speed!");
			break;
	}
	
	return 0;
}
