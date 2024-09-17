#include <stdio.h>
int main ()
{	
	float a, b, temp;
	
	printf(" \t Swaping two numbers using any temporary variable \n");
	printf("Enter value of a : ");
	scanf("%f", &a);
	printf("Enter value of b : ");
	scanf("%f", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Value of a = %f \nValue of b = %f", a,b);
	
	return 0;
}
