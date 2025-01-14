#include <stdio.h>

int main()
{
    // input : (int) N
    // input * N : (int) K

    int N;
    scanf("%d", &N);
    int S[1001] = {0, };
    for (int i = 2; i <= 1000; i++)
    {
        if (S[i] == 1)
        {
            continue;
        }
        int tmp = i*2;
        while(tmp <= 1000)
        {
            S[tmp] = 1;
            tmp += i;
        }
    }

    int result = 0;
    for (int i = 0; i < N; i++)
    {
        int K;
        scanf("%d", &K);
        if (S[K] == 1)
        {
            result++;
        }
    }

    printf("%d", result);
    return 0;
}