#include<stdio.h>
int main()
{
	int sum=0, x, y;
	
	printf("Enter the Number : ");
	scanf("%d",&x);	
	
	while(x > 0){
		y = x % 10;
		sum += y;
		x = x / 10;
	}
	printf("Sum Of Digits of Number = %d \n",sum);

	return 0;
}
