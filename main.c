#include <stdio.h>
int sum(int a, int b); /*function*/
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }

    printf("%c", '*');
}

int main()
{
    int a, b, c; /*declaration*/
    a = 10;
    b = 20;
    c = sum(a, b);
    printstar(7);
    /*printf("the sum is %d\n", c);*/
    return 0;
}

int sum(int a, int b) /*function do not call after declaration*/
{
    return a + b;
}