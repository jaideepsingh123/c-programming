#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//structure provide provision of combining several types of data items under a single entity represent data
//entity is a object use to identify units
struct emp
{
    int id;
    char name[10];
    char designation[10];
};
typedef struct emp employee;
int main()

{
    employee e1; /*e1 is even no  of variable to employee*/
    e1.id = 100;
    strcpy(e1.name, "jaideep");
    strcpy(e1.designation, "trainer");
    printf("employee id:%d\nemployee name:%s\ndesgination:%s\n", e1.id, e1.name, e1.designation);
    /*use of dot to seprate betwee var and attr*/
    printf("------------------\n\n");                                                                  /*by variable*/
    employee *ep = &e1;                                                                                /*pointer structure*/
    printf("employee id: %d\nemployee name:%s\n`desgination:%s\n", ep->id, ep->name, ep->designation); /* by pointer */

    return 0;
}