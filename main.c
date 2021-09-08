#include <stdio.h>
//logical operators(a&&B) is false,(a||b)is true !(a && b) is true
int main()

{
    int c;
    c = 2 || 1;
    printf("1 || 1:%d\n", !c);
    c = 3 || 0;
    printf("1 || 0:%d\n", !c);

    c = 4 || 1;
    printf("0 || 1:%d\n", !c);

    c = 5 || 0;
    printf("0 || 0:%d\n", !c);

    return 0;
}