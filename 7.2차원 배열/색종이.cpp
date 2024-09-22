#include <stdio.h>

int main()
{
    // input : (int) N
    // input * N : (int) a, b

    int arr[100][100] = { 0, };
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                arr[a+j][b+k] = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (arr[i][j] == 1)
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}