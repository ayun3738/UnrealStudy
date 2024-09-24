#include <stdio.h>

int main()
{
    // input : (int) N, K
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            K--;
            if (K == 0)
            {
                printf("%d", i);
                return 0;   
            }
        }
    }

    printf("0");
    return 0;

}