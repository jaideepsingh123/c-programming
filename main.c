#include <stdio.h>
//for loop(repeat line according to our need)
int main()
{
    int i, sum = 0;
    for (i = 10; i >= 1; i--)
    {
        printf("i=%d\n", i);
        sum = sum + i;
        printf("sum:%d\n", sum);
    }

    return 0;
}