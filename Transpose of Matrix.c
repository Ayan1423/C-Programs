#include <stdio.h>
#define N 4
void transpose(int A[][N], int B[][N]){
	int i, j;
    for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++){
            B[i][j] = A[j][i];
        }
    }
}

void printMatrix(int A[][N]){
	int i, j;
    for ( i = 0; i < N; i++){
        for ( j = 0; j < N; j++){
            printf("%d ", A[i][j]);
    	}
        printf("\n");
    }
}

int main()
{
    int A[N][N] = { { 1, 2, 3, 4 }, 
                    { 5, 6, 7, 8 }, 
                    { 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16 } };

    int B[N][N];

    printf("Original matrix:\n");
    printMatrix(A);

    transpose(A, B);

    printf("Transposed matrix:\n");
    printMatrix(B);

    return 0;
}
