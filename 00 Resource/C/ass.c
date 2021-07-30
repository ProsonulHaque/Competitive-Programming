#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double r;
    int i;
    char ch;
    printf("- - - - - - - - - - - - ");
    printf("\n Angle \t Sin \t Cos \n");
    printf("- - - - - - - - - - - - ");
    for(i = 0 ; i <= 90 ; i = i + 15)
    {
        r = i * 3.14159 / 180;
        printf("\n%3d \t %5.2f \t %5.2f \n", i, sin(r), cos(r));
    }
    printf("- - - - - - - - - - - - ");
    getch();
}

