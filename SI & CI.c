#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t;

	printf("Principal : ");
	scanf("%f",&p);
	printf("Rate : ");
	scanf("%f",&r);
	printf("Time : ");
	scanf("%f",&t);
	
	printf("SI : %f \n",(p*r*t)/100);
	printf("CI : %f \n",p*pow(1+(r/100),t));
	
	return 0;
}
