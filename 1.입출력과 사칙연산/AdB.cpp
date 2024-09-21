#include <stdio.h>

int main()
{
    // A, B input
    double A, B;

    scanf("%lf %lf", &A, &B);

    printf("%.12lf\n", A / B);
    return 0;
}