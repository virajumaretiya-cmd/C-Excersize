// Display Rightmost Digit of Integer

#include<stdio.h>
#include<conio.h>
void main()
{
	int num,lastdigit;
	clrscr();
	printf("\n Enter A Number:");
	scanf("%d",&num);
	lastdigit = num % 10;
	printf("\n Last Digit :%d",lastdigit);
	getch();
}