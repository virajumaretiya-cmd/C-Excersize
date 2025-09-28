// Rupees to Paise

#include<stdio.h>
#include<conio.h>
void main()
{
	int rupees,paise;
	clrscr();
	printf("\n Enter amount in Rupees:");
	scanf("%d",&rupees);
	paise=rupees*100;
	printf("\n Paise=%d", paise);
	getch();
}