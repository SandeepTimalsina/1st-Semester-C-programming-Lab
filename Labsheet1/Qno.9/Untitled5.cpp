/*9.	Write a program to input three digit numbers and reverse the number*/
#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("Enter the number to be reverse =");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse number is %d",rev);
	return 0;
}
