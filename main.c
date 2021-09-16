#include <stdio.h>

//string is actually is one dimensional array of character terminated by null charactor ("\0") %S for calling strings
int main()
{
    char greeting[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%c\n", greeting[2]);
    printf("%s\n", greeting);
    printf("\nenter a greeting message 1:");
    scanf("%[^\n]s", greeting);

    printf("\ngreeting message :%s", greeting);

    fflush(stdin);

    printf("\n enter a greeting message 2:");
    scanf("%[^\n]s", greeting);

    printf("\ngreeting message :%s", greeting);
    return 0;
}