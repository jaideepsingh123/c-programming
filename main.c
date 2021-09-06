#include <stdio.h>
//enumerated (list of constant integer value,use only { brackets})

enum boolean
{
    NO,
    YES
};
enum days
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri = 7,
    sat
};
int main()
{
    enum boolean flag = YES;
    printf("%d %d %d\n", flag, thu, sat);
    return 0;
}
