#include <stdio.h>

int main()
{
    // input : (int) N, M
    // input * M : (int) a, b

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
        int L = b-a+1;  // L : range length
        int tmp[L] = {0};
        for (int j = 0; j < L; j++)
        {
            tmp[j] = bascket[b-1-j];
        }

        for (int j = 0; j < L; j++)
        {
            bascket[a-1+j] = tmp[j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", bascket[i]);
    }
    return 0;
}