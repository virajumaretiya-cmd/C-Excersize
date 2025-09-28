// simple interest calculation

#include<stdio.h>
#include<conio.h>
void main()
{
	float principal,rate,time,simpleInterest;
	clrscr();
	printf("\n Enter Principal:");
	scanf("%f", & principal);
	printf("\n Enter Rate :");
	scanf("%f", & rate);
	printf("\n Enter Time:");
	scanf("%f", & time);
	simpleInterest = (principal * rate * time);
	printf("Simple Interest :%2f",simpleInterest);
	getch();
}