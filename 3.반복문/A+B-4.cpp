#include <stdio.h>

int main()
{
    // input : (int) A, B

    int A, B;
    while (1)
    {
        // EOF : End Of File
        if (scanf("%d %d", &A, &B) == EOF)
        {
            break;
        }
        else
        {
            printf("%d\n", A + B);
        }
    }
    return 0;
}