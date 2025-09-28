// Compound  interest calculation

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float principal,rate,time,compoundInterest;
	clrscr();
	printf("\n Enter Principal:");
	scanf("%f",&principal);
	printf("\n Enter Rate:");
	scanf("%f",&rate);
	printf("\n Enter Time :");
	scanf("%f",&time);
	compoundInterest= principal * pow(1+rate/100,time)-principal;
	printf("CompoundInterest : %2f", compoundInterest);
	getch();
}



