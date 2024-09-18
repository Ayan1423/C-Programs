#include<stdio.h>
int main()
{	
	int i, fact = 1, n;
	printf("Enter no. : ");
	scanf("%d", &n);
	
	if(n == 0){
		printf("Factorial of 0 is 1.");
	}
	else{
		for(i = 1; i <= n; i++){
			fact = fact * i;
		}
		printf("Factorial of %d is %d.", n, fact);
	}
}
