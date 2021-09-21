#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//file i/o// is collection of charactors stored on a permanent storage device it
/*standard file automatically opend when program is executes to provide acces to the keyboard (stdin)input,(stdout)(stdrerr)*/
int main()
{
    //int c;
    //  printf("Enter a char:");
    //c = getchar();
    //printf("\nyou entered:");
    //putchar(c);
    //char str[100];
    //printf("\nenter a line:");
    //gets(str);
    //printf("\nyou entered:");
    //puts(str);
    FILE *fp;
    fp = fopen("test.txt", "w+");
    fclose(fp);
    return 0;
}