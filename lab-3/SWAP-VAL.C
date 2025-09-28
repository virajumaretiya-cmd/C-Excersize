// swap two value (without third variable)

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("\n Enter A:");
	scanf("%d",&a);
	printf("\n Enter B:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swap: a=%d,b=%d",a,b);
	getch();
}