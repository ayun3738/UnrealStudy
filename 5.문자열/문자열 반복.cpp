#include <stdio.h>

int main()
{
    // input : (int)T
    // input * T : (int)R (string)S

    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int R;
        scanf("%d", &R);
        char S[21];
        scanf("%s", S);

        for (int j = 0; j < 21; j++)
        {
            if (S[j] == '\0')
            {
                break;
            }
            for (int k = 0; k < R; k++)
            {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }

    return 0;
}