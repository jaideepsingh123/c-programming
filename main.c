#include <stdio.h>
//pointer  to pointer is a form f multiple indirection or a chain of pointers
int main()
{
    int i = 10;
    int *ip = &i;
    int **iip = &ip;
    printf("Address of i:%x\n\n\n\n", &i);
    printf("value of ip:%x\n\n", ip);
    printf("value at address of iip:%X\n\n\n\n", *iip);
    printf("value of i:%d\n\n", i);
    printf("value of i:%d\n\n", *ip);
    printf("value of i:%d\n\n\n", **iip);
}
