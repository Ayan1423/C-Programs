#include <stdio.h>
#define MAX_SIZE 100  
int main() 
{
  int i, n, value, found;
  int a[MAX_SIZE];
  
  printf("\t\tSearch Element In The Array\n\n");
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the value to be searched: ");
  scanf("%d", &value);
  found = 0;
  for (i = 0; i < n; i++) {
    if (a[i] == value) {
      found = 1;
      printf("Value %d found at index %d", value, i);
      break;
    }
  }
  
  if (found !=1 ) printf("The value %d was not found in the array.\n", value);
  
  return 0;
}

