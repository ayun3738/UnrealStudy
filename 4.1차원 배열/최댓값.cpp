#include <stdio.h>

int main()
{
    // input * 9 : (int)

    int N_list[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &N_list[i]);
    }
    int max_N = -1;
    int max_index = -1;
    for (int i = 0; i < 9; i++)
    {
        if (N_list[i] > max_N)
        {
            max_N = N_list[i];
            max_index = i;
        }
    }

    printf("%d\n%d", max_N, max_index + 1);
    return 0;
}