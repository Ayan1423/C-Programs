#include <stdio.h>
int isPrime(int n)
{
	for(int i = 2; i <= n / 2; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main()
{	
	int l, u;
	printf("Enter lower limit : ");
	scanf("%d", &l);
	printf("Enter upper limit : ");
	scanf("%d", &u);
	
	printf("The prime no.'s between %d and %d are : ",l,u);
	for(int i = l; i <= u; i++){
		if(isPrime(i)){
			printf("%d ", i);
		}
	}
}
