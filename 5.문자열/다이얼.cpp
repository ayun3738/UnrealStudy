#include <stdio.h>

int main()
{
    // input : (string) S

    char S[16];
    scanf("%s", S);
    int result = 0;
    for (int i = 0; i < 16; i++)
    {
        if (S[i] == '\0' || S[i] < 'A' || S[i] > 'Z')
        {
            break;
        }
        else if (S[i] <= 'C')
        {
            result += 3;
        }
        else if (S[i] <= 'F')
        {
            result += 4;
        }
        else if (S[i] <= 'I')
        {
            result += 5;
        }
        else if (S[i] <= 'L')
        {
            result += 6;
        }
        else if (S[i] <= 'O')
        {
            result += 7;
        }
        else if (S[i] <= 'S')
        {
            result += 8;
        }
        else if (S[i] <= 'V')
        {
            result += 9;
        }
        else if (S[i] <= 'Z')
        {
            result += 10;
        }
    }
    printf("%d", result);

    return 0;
}