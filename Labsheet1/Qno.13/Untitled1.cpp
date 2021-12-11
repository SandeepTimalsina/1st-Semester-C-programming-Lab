/*13.	Write a program to read three sides of a triangle and calculate the area. [Hint: Area=?s(s-a)(s-b)(s-c)]*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("enter the three sides of the traingle =");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of traingle=%.2f",area);
	return 0;
}
