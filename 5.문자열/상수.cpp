#include <stdio.h>

int main()
{
    // input : (int) A, B

    char A[4], B[4];
    scanf("%s %s", &A, &B);

    int num_A, num_B;
    num_A = (A[0] - '0') + (A[1] - '0') * 10 + (A[2] - '0') * 100;
    num_B = (B[0] - '0') + (B[1] - '0') * 10 + (B[2] - '0') * 100;

    if (num_A > num_B)
    {
        printf("%d", num_A);
    }
    else
    {
        printf("%d", num_B);
    }

    return 0;

}