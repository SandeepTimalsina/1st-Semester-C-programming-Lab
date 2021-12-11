/*19.	Write a program that ask the radius of sphere and print the volume of sphere*/
# include<stdio.h>
int main()
{
	float r,volume;
	printf("Enter the radius of sphere =");
	scanf("%f",&r);
	volume=((float)4/3)*r*r*r*((float)22/7);
	printf("The volume of sphere is %.2f",volume);
	return 0;
}
