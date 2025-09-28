// Addition, Subtraction,etc

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter two number:");
	scanf("%d,%d", &a , &b);
	printf("\n Addition: %d",a+b);
	printf("\n Subtraction: %d", a-b);
	printf("\n Multiplication:%d",a*b);
	printf("\n Division :%d" , a/b);
	getch();
}
