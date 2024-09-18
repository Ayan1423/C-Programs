#include<stdio.h>
#include<Math.h>
int main()
{	
	int binary, r = 0, decimal = 0, i = 0;
	
	printf("Enter the Binary no. : ");
	scanf("%d", &binary);
	
	while(binary > 0){
		r = binary % 10;
		decimal += r*(int)pow(2, i++);
		binary /= 10;
	}

	printf("Decimal : %d", decimal);
}
