#include <stdio.h>
int main()
{
    int i, end;
    printf("print all square root from 1 to :");
    scanf("%d", &end);

    i = 1;
    while (i <= end)
    {
        printf("%d\n", i * i * i);
        i++;
    }
    return 0;
}