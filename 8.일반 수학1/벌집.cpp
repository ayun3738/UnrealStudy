#include <stdio.h>

int main()
{
    // input : (int) N

    int N;
    scanf("%d", &N);
    int a = 1;
    int count = 0;
    while(N <= a)
    {
        a += 6*count;
        count++;
    }

    printf("%d", count);
    return 0;
}