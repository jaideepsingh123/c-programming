#include <stdio.h>
#include <string.h>
//strlen(length of string) ,strcmp(comparison of string),strrev(reversed of string),()
int main()
{
    char arr1[10];
    char arr2[10];
    char arr[20];
    int len = 0, Cmp = 0;
    strcpy(arr1, "hello");
    strcpy(arr2, "world");
    printf("arr1 : %s\n", arr1);
    printf("arr2 : %s\n", arr2);

    len = strlen(arr1);
    printf(" length of arr1 :%d\n", len);
    Cmp = strcmp(arr1, arr2);
    printf("comparison:%d\n", Cmp);
    strrev(arr1);
    printf("reversed :%s\n", arr1);
    strcat(arr1, arr2);
    printf("cancot:%s\n", arr1);
    return 0;
}