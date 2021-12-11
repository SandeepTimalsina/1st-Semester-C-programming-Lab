/*11.	Write a program to display square of given number if it is odd and cube if it is even.*/
#include<stdio.h>
int main()
{
  int num=0,n;
  printf("enter the number");
  scanf("%d",&n);
  if(n%2==0)
  {
  	num=n*n*n;
  	printf("The number is even,Cube of number is %d",num);
  }
  else
  {
  	num=n*n;
  	printf("The number is odd,Square of number is %d",num);
  }
  
}
