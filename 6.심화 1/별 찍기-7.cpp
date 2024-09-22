#include <stdio.h>

int main()
{
    // input : (int) N

    int N;
    scanf("%d", &N);
    int M = 2*N - 1;

    for (int i = 1; i <= N; i++)
    {
        int tmp = N - i;
        for (int j = 0; j < tmp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for (int i = N-1; i > 0; i--)
    {
        int tmp = N - i;
        for (int j = 0; j < tmp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}