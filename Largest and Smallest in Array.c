#include <stdio.h>
int main()
{
  int n, i, min, max;
  
  printf("\t\t\tPrograme To Find Largest And Smallest\n\t\t\t\tNumber In The Array\n\n");
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter values for the array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  min = max = arr[0];
  for (i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Minimum value: %d\n", min);
  printf("Maximum value: %d\n", max);

  return 0;
}
