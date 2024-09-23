#include <stdio.h>

int main()
{
    // input : (int) T
    // input * T : (int) C
    
    int T;
    scanf("%d", &T);
    for (int i=0; i<T; i++)
    {
        int C;
        scanf("%d", &C);
        int count[4] = {0, 0, 0, 0};
        count[0] = C/25;
        C = C%25;
        count[1] = C/10;
        C = C%10;
        count[2] = C/5;
        C = C%5;
        count[3] = C;

        for (int j=0; j<4; j++)
        {
            printf("%d ", count[j]);
        }
        printf("\n");
    }
    return 0;

}