#include <stdio.h>

int main()
{
    // input : (int) N, M
    // input * M : (int)

    int N, M;
    scanf("%d %d", &N, &M);
    int bascket[N] = {0};
    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        for (int j = a; j <= b; j++)
        {
            bascket[j-1] = c;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", bascket[i]);
    }

    return 0;
}