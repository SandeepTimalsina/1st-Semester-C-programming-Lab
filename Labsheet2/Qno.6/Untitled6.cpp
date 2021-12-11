/*Write a program to calculate factorial of a given number.*/
#include<stdio.h>
int main()
{
	int n,i,fac=1;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("Factorial of the given number is %d",fac);
	return 0;
}
