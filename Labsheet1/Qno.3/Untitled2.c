/*3.	Write a Program to calculate the area and circumference of the circle.      */
#include<stdio.h>
void main()
{
    float area,circumference,r,pi;
    pi=22/7;
    printf("Enter the radius of the circle =");
    scanf("%f",&r);
    area=(pi)*r*r;
    circumference=2*(pi)*r;
    printf("The area and circumference of circle are :%f and :%f",area,circumference);
}
