/*15.	If a five-digit number is entered through the keyboard, write a program to calculate	the sum of its digits.*/
#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter the number=");
	scanf("%d",&n);
	while(n!=0)
	{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
    }
    printf("The sum is %d",sum);
    return 0;
}

