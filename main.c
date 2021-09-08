#include <stdio.h>
// assignment operators

int main()
{
    int a = 21;
    int c;
    c = a;
    printf("line 1 - =operator, value of c=%d\n", c);
    c += a;
    printf("line 2 - += operator,value of c =%d\n", c);
    c -= a;
    printf(" line 3 - -=operator , value of c=%d\n", c);
    c *= a;
    printf("line 4 - *=operator  value of c =%d\n", c);
    c /= a;
    printf("line 5 - /=operator,value of c=%d\n", c);
    c = 200;
    c %= a;
    printf("line 6 - %=operators , value of c =%d\n", c);

    return 0;
}