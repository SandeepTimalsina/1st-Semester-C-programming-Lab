/*5.	Write a program to divide one integer by another integer and find the quotient and remainder.*/
#include<stdio.h>
int main()
{
	int num1,num2,quotient,remainder;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	quotient=num1/num2;
	remainder=num1%num2;
	printf("The quotient is %d and remainder is %d",quotient,remainder);
}
