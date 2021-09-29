#include <stdio.h>
//function call by value
void swap(int x, int y)
{
    int temp;
    temp = x; /*save the value of x*/
    x = y;    /*put y into x */
    y = temp; /*put temp into y*/
    return;
}
int main()
{
    int a = 100;
    int b = 200;
    printf("before swap value of a:%d\n", a);
    printf("before swap value of b:%d\n", b);
    swap(a, b);
    printf("after swap value of a:%d\n", a);
    printf("after swap value of b:%d\n", b);
    return 0;
}