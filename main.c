#include <stdio.h>
//function is a group of statement that together perform a task it also know as method and sub-routine or procedure main is function (function_name),return types(int,float,double,) what value we wnat to return _types fuction_name(data_typeparameters1(int num) ,data parameter2,....)
void sum(int x, int y);
int main()
{
    int a = 15, b = 50;
    sum(10, 30);
    sum(a, b);
    return 0;
}
void sum(int x, int y)
{
    int total = x + y;
    printf("total :%d\n", total);
}