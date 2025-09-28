// Area Of Rectangle

#include<stdio.h>
#include<conio.h>
void main()
{
	float length,breadth,area;
	clrscr();
	printf("\n Enter Length:");
	scanf("%f",&length);
	printf("\n Enter Breadth Of Rectangle :");
	scanf("%f",&breadth);
	area = length * breadth;
	printf("\n Area Of Rectangle :%2f",area);
	getch();
}