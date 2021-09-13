#include <stdio.h>
//arrays(defined as collection of similar data items under single name),store squentional form ([1],[2])
int main()
{
    int arr[5] = {43, 56, 21, 56, 78};
    int i, j, temp = 0;
    printf("before sorting\n ");
    for (i = 0; i < 5; i++)
    {
        printf("%d:%d\n", i, arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; i++)
        {
            if (arr[j] > arr[j + i])
            {
                arr[j] ^= arr[j + i];
                arr[j + i] ^= arr[j];
                arr[j] ^= arr[j + i];
            }
        }
    }
    printf("\n\nAfter sorting\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d:%d\n", i, arr[i]);
    }
    return 0;
}