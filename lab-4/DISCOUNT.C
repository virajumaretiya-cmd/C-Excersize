// Discount Calculation

#include<stdio.h>
#include<conio.h>
void main()
{
	float price,discount,finalprice;
	clrscr();
	printf("\n Enter Sale Amount :");
	scanf("%f",&price);
	discount = price * 0.075;
	finalprice = price - discount ;
	printf("\n Original Amount :%2f",price);
	printf("\n Discount (7.5%%):%2f",discount);
	printf("\n Final Price :%2f",finalprice);
	getch();
}