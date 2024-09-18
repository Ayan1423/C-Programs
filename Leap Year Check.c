#include<stdio.h>

int main(){
	
	int year;
	printf("Enter yr : ");
	scanf("%d", &year);
	
	if(year%4==0 && (year%400==0 || (year%100!=0))){
		printf("Leap yr");
	}
	else{
		printf("NOT a leap yr");
	}
}
