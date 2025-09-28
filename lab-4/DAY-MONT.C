// convert days to years months and day

#include<stdio.h>
#include<conio.h>
void main()
{
	int days,years,months,remaingdays;
	clrscr();
	printf("\n Enter Number Of Days:");
	scanf("%d",&days);
	years=days/365;
	months=(days%365)/30;
	remaingdays=(days%365)%30;
	printf("\n Total Days:%d",days);
	printf("\n Years : %d",years);
	printf("\n Months :%d",months);
	printf("\n Remaingdays:%d",remaingdays);
	getch();
}