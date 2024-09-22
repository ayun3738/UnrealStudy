#include <stdio.h>

int main()
{
    // input : (int) arr[9][9]

    int arr[9][9];
    int arr_max[3] = { 0, 1, 1 };

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > arr_max[0])
            {
                arr_max[0] = arr[i][j];
                arr_max[1] = i+1;
                arr_max[2] = j+1;
            }
        }
    }
    printf("%d\n%d %d", arr_max[0], arr_max[1], arr_max[2]);
    return 0;
}