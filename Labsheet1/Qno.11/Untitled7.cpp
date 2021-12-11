/*11.	Write a program that will convert temperature in Centigrade into Fahrenheit. [Hint: C=5/9(F-32) and F=9/5*C+32]*/
#include<stdio.h>
 int main()
 {
 	float C,F;
 	printf("Enter the temperature in Centigrade:");
 	scanf("%f",&C);
 	F=(float)9/5*C+32;
 	printf("The temperature in fahrenheit is %.2f",F);
 	return 0;
 }
