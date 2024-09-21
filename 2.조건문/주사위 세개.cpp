#include <stdio.h>

int main()
{
    // A, B, C input
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A == B && B == C)
    {
        printf("%d\n", A*1000 + 10000);
    }
    else if (A == B || A == C)
    {
        printf("%d\n", A*100 + 1000);
    }
    else if (B == C)
    {
        printf("%d\n", B*100 + 1000);
    }
    else
    {
        int max = A;
        if (B > max)
            max = B;
        if (C > max)
            max = C;
        printf("%d\n", max*100);
    }

    return 0;
}