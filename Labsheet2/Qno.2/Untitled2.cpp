/*2.Write a program to print out all Armstrong numbers between 1 and 500.*/
#include<stdio.h>
int main()
{
	int rem,sum,num,i=1;
	while(i<=500)
	{
		num=i;
		sum=0;
		while(num)
		{
			rem=num%10;
	        sum=sum+(rem*rem*rem);
	        num=num/10;
		}
		if(i==sum)
		{
			printf("The armstrong number is %d\n",i);
		}
	 i++;
	}
}
