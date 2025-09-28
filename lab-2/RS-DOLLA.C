// rupees to dollar

#include<stdio.h>
#include<conio.h>
void main()
{
	float rupees,dollar;
	clrscr();
	printf("\n Enter amount in Rupees:");
	scanf("%f",&rupees);
	dollar=rupees/45;
	printf("\n Dollars =%2f", dollar);
	getch();
}