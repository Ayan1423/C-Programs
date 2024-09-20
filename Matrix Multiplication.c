#include <stdio.h>
#define N 3
int i, j, k;

void multiply(int A[][N], int B[][N], int C[][N]){
    for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++){
            C[i][j] = 0;
            for ( k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

void printMatrix(int A[][N]){
    for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

int main()
{
    int A[N][N] = { { 1, 2, 3 }, 
                    { 4, 5, 6 }, 
                    { 7, 8, 9 } };

    int B[N][N] = { { 1, 0, 0 }, 
                    { 0, 1, 0 }, 
                    { 0, 0, 1 } };

    int C[N][N];

    multiply(A, B, C);

    printf("Resultant matrix:\n");
    printMatrix(C);

    return 0;
}
