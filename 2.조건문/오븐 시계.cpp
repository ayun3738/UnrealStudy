#include <stdio.h>

int main()
{
    // A, B, C input
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    int C_hour = C / 60;
    int C_min = C % 60;
    A += C_hour;
    B += C_min;
    if (B >= 60)
    {
        B -= 60;
        A++;
    }
    if (A >= 24)
    {
        A %= 24;
    }

    printf("%d %d\n", A, B);
}
