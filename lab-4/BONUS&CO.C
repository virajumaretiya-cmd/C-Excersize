// Gross Salary with Bonus & Commission

#include<stdio.h>
#include<conio.h>
void main()
{
	float basesalary,quantity,price,totalamount,bonus,commission,grosssalary;
	clrscr();
	printf("\n Enter Base Salary:");
	scanf("%f",&basesalary);
	printf("\n Enter Quantity Of Item :");
	scanf("%f",&quantity);
	printf("\n Enter Price Per Item :");
	scanf("%f",&price);

	totalamount = quantity*price;
	bonus = totalamount * 0.125;
	commission = totalamount*0.085;
	grosssalary = basesalary+bonus+commission;
	printf("\n Base Salary:%2f",basesalary);
	printf("\n Total Amount :%2f",totalamount);
	printf("\n Bonus (12.5%%):%2f",bonus);
	printf("\n Commission(8.5%%):%2f",commission);
	printf("\n Gross Salary:%2f",grosssalary);
	getch();
}


