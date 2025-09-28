// Kilometer to Meter

#include<stdio.h>
#include<conio.h>
void main()
{
	float km,m,cm;
	clrscr();
	printf("\n Enter Distance In Kilometer :");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	printf("\n Meters=%2f Centimeters=%2f",m,cm);
	getch();
}