/*4.	The length and breadth are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle*/
#include<stdio.h>
void main()
{
	int l,b,area,perimeter;
	printf("Enter the length and bredth of rectangle :\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("The area is %d and perimeter is %d",area,perimeter);
}
