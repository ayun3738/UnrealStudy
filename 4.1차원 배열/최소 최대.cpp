#include <stdio.h>

int main()
{
    // input : (int) N
    // input * N : (int)
    
    int N;
    scanf("%d", &N);
    int min_N = 1000000;
    int max_N = -1000000;

    for (int i=0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        if (num < min_N)
        {
            min_N = num;
        }
        if (num > max_N)
        {
            max_N = num;
        }
    }

    printf("%d %d", min_N, max_N);

    return 0;
}