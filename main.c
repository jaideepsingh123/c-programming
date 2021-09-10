#include <stdio.h>
//while loop(executes statement as long as a given condition is true)
int main()
{
    int num, num1, count = 0;
    printf("enter a number :");
    scanf("%d", &num);

    num1 = num;
    while (num1 != 0)
    {
        num1 = num1 / 10; //4562 divide 10 and point will covert zero to one (4567)-456-45-4
        count++;          //0-1-2-3-4
    }
    printf("%d is %d digit number .", num, count);
    return 0;
}