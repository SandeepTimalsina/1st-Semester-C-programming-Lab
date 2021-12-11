/*13.	Write a program to find the product of digits of any number*/
#include<stdio.h>
int main()
{
	int sum=1,rem,n;
	printf("Enter any number =");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*rem; 
		n=n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}
