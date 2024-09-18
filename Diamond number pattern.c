#include<stdio.h>
int main() 
{	
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5-i; j++) {
			printf("   ");
		}
		for (int j = 1; j <= i; j++) {
			printf("   %d   ",j);
		}
		printf("\n\n");
	}
	
	for (int i = 5-1; i >= 1; i--) {
		for (int j = 1; j <= 5-i; j++) {
			printf("   ");
		}
		for (int j = 1; j <= i; j++) {
			printf("   %d   ",j);
		}
		printf("\n\n");
	}
	
	return 0;
}
