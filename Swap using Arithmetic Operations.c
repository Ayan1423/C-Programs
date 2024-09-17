#include<stdio.h>
int main ()
{	
	float a, b;
		
	printf(" \t Swaping two numbers without any temporary variable \n");
	printf("Enter value of a : ");
	scanf("%f", &a);
	printf("Enter value of b : ");
	scanf("%f", &b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("Value of a = %f \n Value of b = %f ", a, b);	
		
	return 0;	
}
