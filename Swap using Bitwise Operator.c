#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("After swap: a = %d, b = %d", a, b);
    
	return 0;
}
