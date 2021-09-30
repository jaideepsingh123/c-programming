#include <stdio.h>
//function call by address is method of passing arugments to  a function copies the address of an arugment into formal parameters
void swap(int *x, int *y)
{
    int temp;
    temp = *x; /*save the value at address x*/
    *x = *y;   /*put y into x*/
    *y = temp; /*put temp into y*/
    return;
}
int main()
{
    int a = 100;
    int b = 500;
    printf("before swap value of a :%d\n", a);
    printf("before swap ,value of b:%d\n", b);
    swap(&a, &b);
    printf("after swap of a:%d\n", a);
    printf("after swap value of b:%d\n", b);
    return 0;
}
//in this value is store at same place  rather  called by value there are multiples copy of value and there are not store at same place