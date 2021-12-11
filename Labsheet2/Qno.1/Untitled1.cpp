/*1.	Write a program to generate Fibonacci series.*/
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,i,number;
	printf("Enter the no. of elements :");
	scanf("%d",&number);
	printf("%d\t%d\t",n1,n2);
	for(i=2;i<number;++i)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
