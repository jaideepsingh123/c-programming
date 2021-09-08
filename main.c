#include <stdio.h>
//operators precedence(determines the grouping of terms in an expression)
int main()
{
    int result;
    result = 5 + 4 / 2;
    printf("result:%d\n", result);

    result = 5 + 2 - 3;
    printf("result:%d\n", result);

    result = 5 - 2 + 3;
    printf("result:%d\n", result);
    return 0;
}