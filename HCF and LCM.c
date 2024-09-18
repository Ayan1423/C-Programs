#include<stdio.h>
int main()
{	
	int x, y, i, j, lcm, hcf;
	
	printf("Enter Num1 : ");
	scanf("%d", &x);
	printf("Enter Num2 : ");
	scanf("%d", &y);
	
	int xy = x * y;
	
	for(i = 1; i <= xy; i++){
		if(i % x == 0 && i % y == 0){
			lcm = i;
			break;
		}
	}
	
	int small;
	if(x < y) small = x;
	else small = y;
	
	for(j = small; j >= 1; j--){
		if(x % j == 0 && y % j == 0){
			hcf = j;
			break;
		}
	}
	
	printf("LCM : %d", lcm);
	printf("\nHCF : %d", hcf);
}
