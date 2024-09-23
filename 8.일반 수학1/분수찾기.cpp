#include <stdio.h>

int main()
{
    // input : (int) N

    int N;
    scanf("%d", &N);
    int count = 1;
    while(N > 0)
    {
        count++;
        N -= count - 1;
    }

    if (count%2 == 0)
    {
        printf("%d/%d", 1-N, count+N-1);
    }
    else
    {
        printf("%d/%d", count+N-1, 1-N);
    }
}