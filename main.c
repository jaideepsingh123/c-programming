#include <stdio.h>
//register storage class
int main()
{
    register int a = 100;
    printf("value of a:%d\n\n", a);

    printf("address of a:%d\n\n", &a); /*this will not give any value because register var do not have address*/
    return 0;
}