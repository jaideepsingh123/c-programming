#include <stdio.h>

// pointers are variable whose value is the address of another variable
int main()
{
    int i = 10;
    double d = 10.123456;
    char c = 'a';

    int *ip = &i; /* addressing the pointers*/
    double *dp = &d;
    char *cp = &c;
    printf("value of i:%d\n\n", i);
    printf("value of d:%f\n\n", d);
    printf("value of c:%c\n\n", c);

    printf("address of i:%x\n\n", ip); /*also use %p*/
    printf("address of d:%x\n\n", dp);
    printf("address of c:%x\n\n\n\n", cp);
    printf("size of i:%d\n\n", sizeof(i));
    printf("size of d:%d\n\n", sizeof(d));
    printf("size of c:%d\n\n", sizeof(c));
    printf("size of ip:%d\n\n", sizeof(ip));
    printf("size of dp:%d\n\n", sizeof(dp));
    printf("size of cp:%d\n\n", sizeof(cp));
    printf("value stored at %x is %d\n\n", ip, *ip);
    printf("value stored %x is %d\n\n", dp, *dp);
    printf("value stored %x is %d\n\n", cp, *cp);

    return 0;
}
