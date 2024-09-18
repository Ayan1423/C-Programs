#include <stdio.h>
#include<string.h>
int isPalindrome(char str[])
{	
	int low = 0, high = strlen(str) - 1;
	while(low < high){
		if(str[low] != str[high]){
			return 0;
		}
		low++;
		high--;
	}
	return 1;
}

int main ()
{	
	char str[100];
	printf("Enter the string : ");
	scanf("%s", str);
	
	if(isPalindrome(str)){
		printf("%s is Palindrome", str);
	}
	else{
		printf("%s is NOT Palindrome", str);
	}
}
