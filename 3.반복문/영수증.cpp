#include <stdio.h>

int main()
{
    // input : (int) X
    // input : (int) N
    // input * N : (int) a, b

    int X, N;
    scanf("%d", &X);
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        X -= a*b;
    }

    if (X == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}