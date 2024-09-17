#include<stdio.h>
int main()
{
	int reverse, remainder, z;
	
	printf("Enter the Number : ");
	scanf("%d",&z);
	
	while(z != 0){
		remainder = z % 10;
		reverse = reverse * 10 + remainder;
		z /= 10;
	}	
	printf("Reversed number = %d",reverse);
	
	return 0;
}
