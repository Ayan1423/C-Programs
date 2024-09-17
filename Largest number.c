#include<stdio.h>
int main ()
{
	float a, b, c;	
	
	printf("\t Largest between three numbers \n");	
	printf("Enter a : ");
	scanf("%f", &a);
	printf("Enter b : ");
	scanf("%f", &b);
	printf("Enter c : ");
	scanf("%f", &c);
	
	if(a>b && a>c)
	printf("a is the largest number");
	else if(b>c && b>a)
	printf("b is the largest number");
	else
	printf("c is the largest number");
		
	return 0;	
}
