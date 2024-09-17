#include<stdio.h>
int main()
{
	int n, reverse, a;

	printf("Enter a number to check if its palindrome or not : "); 
	scanf("%d",&n); 
	a=n; 
	 
	while (n != 0){
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	
	if(a==reverse)
		printf("Number is palindrome"); 
	
	else
		printf("Number is not palindrome"); 
	
	return 0;
}
