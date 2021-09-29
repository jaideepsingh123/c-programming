#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 25, b = 25;
    printf("total:%d", sum(a, b));
    return 0;
}