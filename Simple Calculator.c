#include<stdio.h>

int main(){
	
	char x;
	float a,b;
	printf("Enter an operator (+,-,*,/) : ");
	scanf("%c", &x);
	printf("Enter two operands : \n");
	scanf("%f %f", &a, &b);
	
	switch (x) {
		case '+':
			printf("Addition : %f", a+b);
			break;
		case '-':
			printf("Subtraction : %f", a-b);
			break;
		case '*':
			printf("Multiplication : %f", a*b);
			break;
		case '/':
			if(b!=0){
				printf("Division : %f", a/b);
			}
			else{
				printf("ERROR!!! Can't divide by 0.");
			}
			break;
		default:
			printf("ERROR!!! Operator is not correct.");			
	}
}
