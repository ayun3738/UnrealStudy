#include <stdio.h>

int main()
{
    // input * 3 : (int) A, (int) B, (int) V

    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    printf("%d", (V-A)/(A-B)+1);

    return 0;
}