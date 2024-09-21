#include <stdio.h>

int main()
{
    // A, B input
    int A, B;
    scanf("%d %d", &A, &B);
    if (B < 45)
    {
        B += 15;
        if (A == 0)
        {
            A = 23;
        }
        else
        {
            A--;
        }
    }
    else
        B -= 45;

    printf("%d %d\n", A, B);
}
