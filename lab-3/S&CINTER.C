// defernce between simple and compound interset

#include<stdio.h>
#include<conio.h>
void main()
{
	float principal,rate,time,simpleinterest,compoundinterest,differnce;
	clrscr();
	printf("\n Enter Principal:");
	scanf("%f",&principal);
	printf("\n Enter Rate:");
	scanf("%f",&rate);
	printf("\n Enter Time:");
	scanf("%f", & time);
	simpleinterest= (principal * rate * time)/100;
	differnce =compoundinterest-simpleinterest;
	printf(" Differnce: %f",differnce);
	getch();
}