#include<stdio.h>
int main()
{	
	int n, i, counter=0;
	printf("Enter a +ve no. : ");
	scanf("%d", &n);
	
	for(i = 2; i <= n/2; i++){
		if(n % i == 0){
			counter++;
			break;
		}
	}
	if(counter == 0){
		printf("Prime");
	}
	else{
		printf("NOT Prime");
	}
}
