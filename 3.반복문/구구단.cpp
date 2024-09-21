#include <stdio.h>

int main()
{
    // input : (int) A
    // output : 0
    int A;
    scanf("%d", &A);
    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", A, i, i*A);
    }

    return 0;
}