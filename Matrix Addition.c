#include <stdio.h>
int main() 
{
    int rows, cols;
	int i, j;
    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols];

    printf("Enter the elements of matrix A:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    int C[rows][cols];
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("The result of adding the matrices is:\n\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
