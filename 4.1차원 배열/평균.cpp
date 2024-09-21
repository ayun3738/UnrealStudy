#include <stdio.h>

int main()
{
    // input : (int) N
    // input * N : (int)

    int N;
    scanf("%d", &N);
    float result = 0;
    int max_score = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp > max_score)
        {
            max_score = tmp;
        }
        result += tmp;
    }
    result = result / max_score / N * 100;
    printf("%f", result);

    return 0;
}