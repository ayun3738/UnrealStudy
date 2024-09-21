#include <stdio.h>

int main()
{
    // input : (int) N, X
    // input * N : (int)

    int N, X;
    scanf("%d %d", &N, &X);
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        if (num < X)
        {
            printf("%d ", num);
        }
    }

    return 0;
}