// gross salary calculation

#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,da,hra,grossSalary;
	printf("\n Enter Basic Salary:");
	scanf("%f",&basic);
	da=0.40*basic;
	hra=0.20*basic;
	grossSalary= basic+da+hra;
	printf("\n Basic Salary: %2f",basic);
	printf("\n DA: %2f",da);
	printf("\n HRA: %2f",hra);
	printf("\n Gross Salary: %2f",grossSalary);
	getch();
}