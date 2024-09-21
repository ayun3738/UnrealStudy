#include <stdio.h>

int main()
{
    //input : (int) N
    //input * N : (int) S

    int N;
    scanf("%d", &N);
    char S[101];
    scanf("%s", S);
    int sum = 0;
    int idx = 0;
    while(S[idx] != '\0')
    {
        sum += int(S[idx]) -48;
        idx++;
    }
    printf("%d", sum);

    return 0;
}