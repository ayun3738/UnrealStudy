#include <stdio.h>

int main()
{
    // input * 28 : (int)

    int N_list[30] = {0};
    for (int i = 0; i < 28; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        N_list[tmp-1] = 1;
    }

    for (int i = 0; i < 30; i++)
    {
        if (N_list[i] == 0)
        {
            printf("%d\n", i+1);
        }
    }
}