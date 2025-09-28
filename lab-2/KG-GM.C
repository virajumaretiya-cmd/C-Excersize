// Kilogram To Grams

#include<stdio.h>
#include<conio.h>
void main()
{
	float kg,grams;
	clrscr();
	printf("\n Enter weight in kilogram:");
	scanf("%f",&kg);
	grams=kg*1000;
	printf("Weight in grams=%2f");
	getch();
}