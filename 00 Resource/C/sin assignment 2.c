/*
Sin/Cos Calculator Function
Prosonul Haque
Bangladesh
29 July 2020
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159

void calculator(void);

int main(void){
 	
	//Call the Calculator function
	calculator();
	
	return 0;
}

void calculator(void){
	
	//Declare the variables
	double sine, cosine, angle;
	int i;
	
	printf("- - - - - - - - - - - -");
	printf("\n Angle \t Sin \t Cos \n");
	printf("- - - - - - - - - - - -");
	    
	//Use a for loop and call sin()/cos() library function
	for (i=0; i<=90; i+=10){
		
		angle = i*PI/180.0;
		sine = sin(angle); 
		cosine = cos(angle);
		
		printf("\n %2d \t %.2lf \t %.2lf \n", i, sine, cosine); 
	}
	
	printf("- - - - - - - - - - - -");
}
