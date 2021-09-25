#include "stdio.h"
#define BEGIN {
#define END }
#define Interger int
//macro is text substitution definition which meam whenever a macro is callled text it get expaned at line of call preprocessor

Interger main()
    BEGIN
    Interger i = 1;
while (i <= 10)
    BEGIN
printf("i=%d\n", i);
i++;
END
    END
    /*without any preprocessor
    int main
    {(begin)
    int i=1;
while (i<=10);
{
    print("i=%d\n",i);
    i++
}
}*/
