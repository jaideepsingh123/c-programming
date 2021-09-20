#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//union is a data type enable to store different data type in the same memory location also provide efficent way of using same memory for multi-purpose
union id
{
    char drivinglicense[10];
    char passport[15];
};
typedef union id identify;
int main()
{
    identify id1;
    strcpy(id1.drivinglicense, "DL XZL2002 ");
    strcpy(id1.passport, "pp13435");
    printf("size:%d\n", sizeof(id1));

    printf("\n\n%s\n", id1.drivinglicense);
    printf("\n\n%s\n", id1.passport);
    return 0;
}