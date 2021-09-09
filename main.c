#include <stdio.h>
//switch statement
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("a is a vowel");
        break;

    case 'e':
        printf("e is a vowel");
        break;
    case 'i':
        printf("i is vowel");
        break;
    case 'o':
        printf("o is vowel");
        break;
    case 'u':
        printf("u is vowel");
        break;
    default:
        printf("consonant / special character");
        break;
    }

    return 0;
}
