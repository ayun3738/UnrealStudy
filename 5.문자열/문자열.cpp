#include <stdio.h>

int main()
{
    // input : (int) T
    // input * T : (string) S

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        char S[1001];
        scanf("%s", S);
        int idx = 0;
        while(1)
        {
            if (S[idx] == '\0')
            {
                break;
            }
            idx++;
        }
        printf("%c%c\n", S[0], S[idx-1]);
    }

    return 0;
}