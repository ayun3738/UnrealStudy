#include <stdio.h>

int main()
{
    // input * 3 : (int) A, (int) B, (int) V

    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    if (V <= A)
        printf("1");
    else
    {
        printf("%d", (V-A-1)/(A-B) + 2);
    }

    return 0;
}