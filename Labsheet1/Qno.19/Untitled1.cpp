/*20.	Write a program that ask a number and print the remainder after dividing the number by 5.*/
#include<stdio.h>
int main()
{
   int  n,rem;
   printf("Enter a number =");
   scanf("%d",&n);
   rem=n%5;
   printf("the remainder of the number is %d",rem);
   return 0;
}
