// Fahrenheit to Celsius

#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	clrscr();
	printf("\n Enter temperature in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("\n Celsius = %2f", c);
	getch();
}