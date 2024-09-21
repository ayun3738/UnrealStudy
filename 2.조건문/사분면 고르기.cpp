#include <stdio.h>

int main()
{
    // A, B input
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    if (A > 0)
    {
        if (B > 0)
            printf("1\n");
        else
            printf("4\n");
    }
    else
    {
        if (B > 0)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}