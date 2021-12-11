/*6.	Write a program to print all the numbers from 10 to 1 and find their sum using while loop.*/
#include<stdio.h>
int main()
{
	int sum=0,i=10,n=0;
	while(i>=1)
	{
		printf("%d\t",i);
		sum=sum+i;
		i--;
	}
	printf("\n%d is the total sum.",sum);
	return 0;
}
