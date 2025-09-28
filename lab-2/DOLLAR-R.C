// Dollar To Rupees

#include<stdio.h>
#include<conio.h>
void main()
{
	float dollar,rupees;
	clrscr();
	printf("\n Enter amount in Dollr:");
	scanf("%f", & dollar);
	rupees=dollar*45;
	printf("\n Rupees= %2f",rupees);
	getch();
}