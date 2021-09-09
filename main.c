#include <stdio.h>
//nested if statement
int main()
{
    int a, b, c;
    printf("enter three number a,b,c:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is big \n");
    }
    else
    {
        if (b > c)
        {
            printf("b is big \n");
        }
        else
        {
            printf("c is big\n");
        }
    }

    return 0;
}