/*6.	Write a program to convert entered number of seconds into hours, minutes and seconds*/
#include<stdio.h>
int main()
{
	int h,m,s,sec;
	printf("Enter the numbers in seconds =");
	scanf("%d",&sec);
    h=(sec/3600);
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(m*60));
	printf("H:M:S =%d:%d:%d\n",h,m,s);
	return 0;
}
