#include <stdio.h>

int main()
{
    // input : (int) N
    // input * N : (int)
    // input : (int) v

    int N;
    scanf("%d", &N);
    int result = 0;
    int N_list[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &N_list[i]);
    }
    int v;
    scanf("%d", &v);
    for (int i = 0; i < N; i++)
    {
        if (N_list[i] == v)
        {
            result++;
        }
    }

    printf("%d", result);
    
    return 0;
}