#include <stdio.h>
//null pointers
int main()
{
    int *ptr = NULL;
    int i = 0; /*addrssing values*/
    ptr = &i;
    printf("The value of ptr is :%x\n", ptr);
    if (ptr)
    {
        printf("pointer is not a null pointer \n");
    }

    if (!ptr)
    {
        printf("pointer is a null  pointer\n");
    }

    return 0;
}
