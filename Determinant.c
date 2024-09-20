#include <stdio.h>
int main()
{
    int order;
    printf("Enter the order of the matrix (2 or 3): ");
    scanf("%d", &order);

    if (order == 2) {
        int a, b, c, d;

        printf("Enter the elements of the 2x2 matrix (a, b, c, d):\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        printf("Determinant of the 2x2 matrix is: %d\n", determinant2x2(a, b, c, d));
    }
    else if (order == 3) {
        int a, b, c, d, e, f, g, h, i;

        printf("Enter the elements of the 3x3 matrix (a, b, c, d, e, f, g, h, i):\n");
        scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

        printf("Determinant of the 3x3 matrix is: %d\n", determinant3x3(a, b, c, d, e, f, g, h, i));
    }
    else {
        printf("Invalid order! Please enter 2 or 3.\n");
    }

    return 0;
}

int determinant2x2(int a, int b, int c, int d) {
    return (a * d) - (b * c);
}

int determinant3x3(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    return a * (e * i - f * h)
         - b * (d * i - f * g)
         + c * (d * h - e * g);
}
