/*18.	Entered a number in decimal and print it in octal and hexadecimal.*/
#include<stdio.h>
int main()
{
	int value;
	printf("Enter the value in decimal =");
	scanf("%d",&value);
	printf("Value in octal is %o\n",value);
	printf("Value in Hexadecimal is %X",value);
	return 0;
	
}
