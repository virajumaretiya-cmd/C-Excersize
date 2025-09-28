// Deprecition Calculation

#include<stdio.h>
#include<conio.h>
void main()
{
	float price,depreciation,finalprice;
	clrscr();
	printf("\n Enter Price Of Item:");
	scanf("%f",&price);
	depreciation = price*0.23;
	finalprice= price-depreciation;
	printf("\n Original Price :%2f", price);
	printf("\n Depreciation Price:%2f",depreciation);
	printf("\n Final Price:%2f",finalprice);
	getch();
}