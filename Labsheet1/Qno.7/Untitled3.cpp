/*7.	Write a program to convert entered number of days into years, months and days.*/
#include<stdio.h>
int main()
{
	int days,y,m,d;
	printf("Input Days =");
	scanf("%d",&days);
	y=(days/365);
	m=(days-(365*y))/30;
	d=(days-(365*y)-(30*m));
	printf("Y:M:D = %d:%d:%d",y,m,d);
	return 0;
}
