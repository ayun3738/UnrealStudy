#include <stdio.h>

int main()
{
    // input * 6 : (int)

    int arr[6];
    int arr2[6] = { 1, 1, 2, 2, 2, 8 };
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i] - arr[i]);
    }
}