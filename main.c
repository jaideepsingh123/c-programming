#include <stdio.h>
//modifires types and to tell size

int main()
{
    int i = 2147483643;
    short int si = 32768;
    long int li = 2147483648;
    signed int sli = 2147483648;

    printf("int:%d\n", i);
    printf("short int:%d\n", si);
    printf("long int:%d\n", li);
    printf("signed int:%d\n", sli);

    printf("size of int:%d\n", sizeof(i));
    printf("size of short int:%d\n", sizeof(si));
    printf("size of long int:%d\n", sizeof(li));
    printf("size of signed int:%d\n", sizeof(sli));
    return 0;
}