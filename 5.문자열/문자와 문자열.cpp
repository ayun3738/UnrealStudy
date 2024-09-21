#include <stdio.h>

int main()
{
    // input : (string) S
    // input : (int) i

    char S[1001];
    scanf("%s", S);
    int i;
    scanf("%d", &i);
    printf("%c", S[i-1]);

    return 0;
}