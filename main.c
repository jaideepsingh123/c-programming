#include <stdio.h>
//relational opreators (compare couple of value )(==,!=(not equal to),>(greater then),<(less then)>=,<=)

int main()

{
    int a = 20;
    int b = 20;
    int c;
    c = a == b;
    printf("==:%d\n", c);
    c = a != b;
    printf("!=:%d\n", c);
    c = a >= b;
    printf(">=:%d\n", c);
    c = a <= b;
    printf("<=:%d\n", c);
    c = a > b;
    printf(">:%d\n", c);
    c = a < b;
    printf("<:%d", c);
    return 0;
}
