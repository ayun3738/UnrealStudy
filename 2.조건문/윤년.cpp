#include <stdio.h>

int main()
{
    // A input
    int A;
    scanf("%d", &A);
    int B;
    if (A % 4 == 0 && A % 100 != 0)
    {
        B = 1;
    }
    else if (A % 400 == 0)
    {
        B = 1;
    }
    else
    {
        B = 0;
    }
    printf("%d\n", B);
}