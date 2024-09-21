#include <stdio.h>

int main()
{
    // input : (string) S
    char S[101];
    int result = 0;
    scanf("%s", S);
    while(S[0] != '\0')
    {
        result++;
        scanf("%s", S);
    }
    
    printf("%d", result);

    return 0;
}