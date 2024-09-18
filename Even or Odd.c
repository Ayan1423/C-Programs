#include<stdio.h>

int main(){
	
	int x;
	printf("Enter the no. : ");
	scanf("%d", &x);
	
	if(x<0){
		printf("No. is -ve.");
	}
	else if(x%2==0){
		printf("No. is EVEN.");
	}
	else{
		printf("No. is ODD.");
	}
}
