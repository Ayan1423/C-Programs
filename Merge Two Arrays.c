#include<stdio.h>
int main() 
{
	int arr1[50], arr2[50], size1, size2, i, k, merge[100];

	printf("Enter 1st Array Size: ");
	scanf("%d", &size1);
	printf("Enter 1st Array Elements: ");
	for(i = 0; i < size1; i++) {
		scanf("%d", &arr1[i]);
		merge[i] = arr1[i];
	}
	
	k = i;
	printf("\nEnter 2nd Array Size: ");
	scanf("%d", &size2);
	printf("Enter 2nd Array Elements: ");
	for(i = 0; i < size2; i++) {
		scanf("%d", &arr2[i]);
		merge[k] = arr2[i];
		k++;
	}
	
 	printf("\nNew Array after Merging :\n");
	for(i = 0; i < k; i++)
	printf("%d ", merge[i]);
	return 0;
}
