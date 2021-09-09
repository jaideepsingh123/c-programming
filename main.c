#include <stdio.h>
//if else .. if else statement
int main()
{
    int a, b, c;
    printf("enter your number :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (b > c && b > a)
    {
        printf("b is big \n");
    }
    else
    {
        if (c > a && c > b)
        {
            printf("c is big");
        }
        else
        {
            printf("b is big\n");
        }
    }
    return 0;
}
