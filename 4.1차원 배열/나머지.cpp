#include <stdio.h>

int main()
{
    // input * 10 : (int)

    int N_list[42] = {0};
    for (int i = 0; i < 10; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        N_list[tmp%42] = 1;
    }

    int sum_remainder = 0;
    for (int i = 0; i < 42; i++)
    {
        sum_remainder += N_list[i];
    }
    printf("%d", sum_remainder);
}