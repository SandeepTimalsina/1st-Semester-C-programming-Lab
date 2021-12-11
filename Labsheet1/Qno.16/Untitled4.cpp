/*17.	Two number are entered through keyboard and
 if the first number is greater than second number then print the sum of number otherwise print the difference of number (use tannery operator)*/
 #include<stdio.h>
int main()
{
	int a,b,c,sum,diff;
	printf("Enter two number =");
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	c=(a>b)?sum:diff;
	printf("The result is %d",c);
	return 0;
}
