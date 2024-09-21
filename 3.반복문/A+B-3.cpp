#include <stdio.h>

int main()
{
    // input : (int) T 테스트 케이스 개수
    // input * 5 : (int) A, B A와 B

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    
    return 0;
}