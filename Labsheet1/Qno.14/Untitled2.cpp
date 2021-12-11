/*14.	Two numbers are input through the keyboard. Write a program to interchange the  the contents.*/
#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter two number a and b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("The vale of a is %d and bis%d",a,b);

}

