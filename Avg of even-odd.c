//Write an interactive program that reads in integers until a 0 is entered. 
//If it encounters 0 as input, then it should display :
//i. The total no. of even and odd integers.
//ii. Average value of even integers.
//iii. Average value of odd integers.

#include<stdio.h>
int main()
{
	int n, a, b, even_count, odd_count, even_avg, odd_avg;
	
	loop:
	printf("Enter number : ");
	scanf("%d",&n);
	
	if(n != 0){
		if (n % 2 == 0){
			even_count ++;
			a=a+n;
			even_avg=a/even_count;
		}
		else if (n % 2 != 0){
			odd_count ++;
			b=b+n;
			odd_avg=b/odd_count;
		}
		goto loop;
	}
	else{
		printf("Total number of Even Integers = %d \n", even_count);
		printf("Total number of Odd Integers = %d \n", odd_count);
		printf("Average Value Of Even Integers %d \n", even_avg);
		printf("Average Value Of Odd Integers %d \n", odd_avg);
	}
	
	return 0;
}
