#include<stdio.h>
int main ()
{
	float a, b, c;	
	
	printf("\t Smallest between three numbers \n");	
	printf("Enter a : ");
	scanf("%f", &a);
	printf("Enter b : ");
	scanf("%f", &b);
	printf("Enter c : ");
	scanf("%f", &c);
	
	if(a<b && a<c)
	printf("a is the smallest number");
	else if(b<c && b<a)
	printf("b is the smallest number");
	else
	printf("c is the smallest number");
		
	return 0;	
}
