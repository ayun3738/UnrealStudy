#include <stdio.h>

int main()
{
    // input : (int) N, M
    // input * M : (int)

    int N, M;
    scanf("%d %d", &N, &M);
    int bascket[N];
    for (int i = 0; i < N; i++)
    {
        bascket[i] = i+1;
    }
    for (int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int tmp = bascket[a-1];
        bascket[a-1] = bascket[b-1];
        bascket[b-1] = tmp;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", bascket[i]);
    }

    return 0;
}