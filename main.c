#include <stdio.h>
//data types to print int(%d),float(%6f),char(%c),double(%f)

int main(int argc, char const *argv[])
{
    int var = 100;
    double vard = 100000;
    char varc = 'a';
    float varf = 5.56;
    printf("%d", var);
    printf("%f", vard);
    printf("%c", varc);
    printf("%6f", varf);
    return 0;
}
