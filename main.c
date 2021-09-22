#include <stdio.h>
//reading a file
/*fgetc()function reads a charactor from the input referenced by fp*/
int main()
{
    FILE *fp;
    char buff[100], ch; /*charactor arrays*/

    fp = fopen("test.txt", "r");

    ch = fgetc(fp);
    /*read charactor*/
    printf("1:%c\n\n", ch);

    fscanf(fp, "%s", buff); /*read first  word/letter before the space*/
    printf("2:%s\n\n", buff);

    fgets(buff, 255, fp); /*read the remaing part before space
    printf("3:%s\n", buff);

    fgets(buff, 255, fp);/*read next line*/
    printf("4 :%s\n", buff);
    return 0;
}