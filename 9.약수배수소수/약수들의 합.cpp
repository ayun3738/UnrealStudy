#include <stdio.h>

int main()
{
    // input : (int) n

    int n;
    scanf("%d", &n);
    while(n > 2)
    {
        int i = 2;
        int nums[1000] = {0, };
        int idx = 1;
        nums[0] = 1;
        while(i < n)
        {
            if(n % i == 0)
            {
                nums[idx] = i;
                idx++;
            }
            i++;
        }

        int sum = 0;
        for(int i = 0; i < idx; i++)
        {
            sum += nums[i];
        }
        if (sum == n)
        {
            printf("%d = ", n);
            for (int i = 0; i < idx-1; i++)
            {
                printf("%d + ", nums[i]);
            }
            printf("%d\n", nums[idx-1]);
        }
        else
        {
            printf("%d is NOT perfect.\n", n);
        }
        scanf("%d", &n);
    }
    
    return 0;
}