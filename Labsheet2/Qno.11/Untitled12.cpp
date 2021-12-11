/*12.	Two numbers are entered through the keyboard. Write a program to find the value of one number raise to the power of another.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter two number a and b :");
	scanf("%d%d",&a,&b);
	c=pow(a,b);
	printf("The power of %d^%d is %d.",a,b,c);
	return 0;
}
