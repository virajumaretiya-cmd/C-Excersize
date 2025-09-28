// Circumference of a circle

#include<stdio.h>
#include<conio.h>
#define PI 3.14159
void main()
{
	float radius,circumference;
	printf("\n Enter radius of circle :");
	scanf("%f", & radius);
	circumference=2*PI*radius;
	printf("\n Circumference of circle : %2f", circumference);
	getch();
}