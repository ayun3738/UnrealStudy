#include <stdio.h>

int main()
{
    // input : (int) N

    int N;
    scanf("%d", &N);
    int a = 2;
    for (int i=1; i<=N; i++)
    {
        a = a*2-1;
    }
    printf("%ld", a*a);
    return 0;
}