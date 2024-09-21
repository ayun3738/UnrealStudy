#include <stdio.h>

int main()
{
    // A, B input
    int A, B;

    scanf("%lf %lf", &A, &B);

    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);
    return 0;
}