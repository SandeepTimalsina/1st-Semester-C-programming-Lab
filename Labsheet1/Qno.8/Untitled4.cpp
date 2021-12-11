/*8.	Write a program to convert length from mm to km, m, cm and mm.*/
#include<stdio.h>
int main()
{
	int mm,m,cm,km,l;
	printf("Enter the length in mm =");
	scanf("%d",&mm);
	km=(mm/1000000);
	m=(mm-(km*1000000))/1000;
	cm=(mm-(km*1000000)-(m*1000))/100;
	l=(mm-(km*1000000)-(m*1000)-(cm*10));
	printf("km:m:cm:mm=%d:%d:%d:%d ",km,m,cm,l);
	return 0;
	
}
