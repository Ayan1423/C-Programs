#include <stdio.h>
#define N 3
void printLowerTriangular(int A[][N]){
	int i, j;
    for ( i = 0; i < N; i++){
        for ( j = 0; j <= i; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

void printUpperTriangular(int A[][N]){
	int i, j;
    for ( i = 0; i < N; i++){
        for ( j = i; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

int main()
{
    int A[N][N] = { { 1, 2, 3 }, 
                    { 4, 5, 6 }, 
                    { 7, 8, 9 } };

    printf("Lower triangular matrix:\n");
    printLowerTriangular(A);

    printf("Upper triangular matrix:\n");
    printUpperTriangular(A);

    return 0;
}
