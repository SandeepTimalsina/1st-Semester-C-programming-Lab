/*Write a program find to addition, subtraction, multiplication and division of two numbers entered by the user.*/


#include<stdio.h>
void main()
{
 float a,b,division,addition,subtraction,multiplication;
 printf("Enter the value of a and b respectively \n:");
 scanf("%f%f",&a,&b);
 addition=a+b;
 subtraction=a-b;
 multiplication=a*b;
 division=a/b;
 printf("Addition =%f\n",addition);
 printf("Subtraction =%f\n",subtraction);
 printf("Multiplication =%f\n",multiplication);
 printf("Division =%f\n",division);
 return 0;
}
