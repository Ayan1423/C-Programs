#include <stdio.h>
#define MAX_SIZE 100  
int main() 
{
  int i, n, pos, value;
  int a[MAX_SIZE];

  printf("\t\tInsert Element In Array\n\n");
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the position to insert the value: ");
  scanf("%d", &pos);
  printf("Enter the value to be inserted: ");
  scanf("%d", &value);

  for (i = n; i > pos; i--) {
    a[i] = a[i - 1];
  }

  a[pos] = value;
  n++;  

  printf("The modified array is: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
