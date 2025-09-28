// Liter to Mililiter

#include<stdio.h>
#include<conio.h>
void main()
{
	float liter,ml;
	clrscr();
	printf("\n Enter Volume in liters:");
	scanf("%f",&liter);
	ml=liter*1000;
	printf("\n Mililiter=%2f",ml);
	getch();
}