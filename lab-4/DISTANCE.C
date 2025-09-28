// convert distance between two cities

#include<stdio.h>
#include<conio.h>
void main()
{
	float km,m,cm,feet,inch;
	printf("\n Enter Distance In Kilometers :");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	feet=m*3.33;
	inch=feet*12;
	printf("\n Kilometers : %2f",km);
	printf("\n Meters : %2f",m);
	printf("\n Centimeters:%2f",cm);
	printf("\nFeet       :",feet);
	printf("\n Inches:",inch);
	getch();
}