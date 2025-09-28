// Area of a circle

#include<stdio.h>
#include<conio.h>
#define PI 3.14159
void main()
{
	float radius,area;
	clrscr();
	printf("\n Enter radius of circle:");
	scanf("%f",& radius);
	area=PI*radius*radius;
	printf("\n Area of circle: %2f",area);
	getch();
}