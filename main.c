#include <stdio.h>
#include <stdlib.h>
//pointer and function
int *add(int *x, int *y)
{
    int sum = *x + *y;

    return &sum;
}
int main()
{
    int a = 100;
    int b = 200;
    int *ptr = add(&a, &b);
    printf("%d", *ptr);
    return 0;
}