#include <stdio.h>

int main()
{
    // input : (string) S

    char S[101];
    scanf("%s", S);
    for (int i = 97; i < 123; i++)
    {
        int idx = -1;
        for (int j = 0; j < 101; j++)
        {
            if (int(S[j]) == i)
            {
                idx = j;
                break;
            }

            if (S[j] == '\0')
            {
                break;
            }
        }
        printf("%d ", idx);
    }

    return 0;
}