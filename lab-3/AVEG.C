// Average of three students ages

#include<stdio.h>
#include<conio.h>
void main()
{
	int age1,age2,age3;
	float average;
	clrscr();
	printf("\n Enter ages of three students:");
	scanf("%d %d %d ", &age1,&age2,&age3);
	average=(age1+age2+age3)/3.0;
	printf("\n Average Age : %2f",average);
	getch();
}