#include <stdio.h>
//arithmetic operators
int main()

{
    int a = 21;
    int b = 10;
    int c;
    c = a + b;
    printf("line 1:%d\n", c);
    c = a - b;
    printf("line 2:%d\n", c);
    c = a * b;
    printf("line 3:%d\n", c);
    c = a / b;
    printf("line 4:%d\n", c);
    c = a % b;
    printf("line 5 :%d\n", c);
    c = a++; /*increasing*/
    printf("line 6:%d\n", c);
    c = a--; /*decreasing*/
    printf("line 7:%d\n", c);
    c = ++a;
    printf("line 8:%d\n", c);
    c = --a;
    printf("line 9:%d\n", c);

    return 0;
}
