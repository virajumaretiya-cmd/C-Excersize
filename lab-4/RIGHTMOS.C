// Display Two Rightmost Digit

#include<stdio.h>
#include<conio.h>
void main()
{
	int num,lasttwodigit;
	clrscr();
	printf("\n Enter A Number:");
	scanf("%d",&num);
	lasttwodigit= num%100;
	printf("\n Last Two Digit :%d",lasttwodigit);
	getch();
}