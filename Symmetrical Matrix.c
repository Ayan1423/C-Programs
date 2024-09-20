#include <stdio.h>
#define N 3
int isSymmetrical(int A[][N]){
	int i, j;
    for ( i = 0; i < N; i++)
        for ( j = 0; j < N; j++)
            if (A[i][j] != A[j][i])
                return 0;

    return 1;
}

int main()
{
    int A[N][N] = { { 1, 2, 3 }, 
                    { 2, 0, 4 }, 
                    { 3, 4, 5 } };

    if (isSymmetrical(A))
        printf("The matrix is symmetrical.\n");
    else
        printf("The matrix is not symmetrical.\n");

    return 0;
}
