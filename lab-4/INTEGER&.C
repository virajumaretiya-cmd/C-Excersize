// Split Integer and Fraction

#include<stdio.h>
#include<conio.h>
void main()
{
	float num;
	clrscr();

	int integerpart;
	float fractionpart;
	printf("\n Enter A Number :");
	scanf("%f",&num);
	integerpart = (int) num;
	fractionpart = num - integerpart;
	printf("\n Integer Part :%d\nFraction Part:%2f",integerpart,fractionpart);
	getch();
	}