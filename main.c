#include <stdio.h>

//writing a file
/*finput{}writes the string to output stream referenced by fp*/
int main()
{
    FILE *fp;                     /*file pointer where to save file*/
    fp = fopen("test.txt", "w+"); /*file open by fopen*/
    fputc('*', fp);
    /* *-single charactor , fp file pointer where to save file data*/
    fprintf(fp, "\nthis is testing for fprintf....\n");
    fputs("this is testing for fputs...\n", fp);
    fclose(fp);

    return 0;
}