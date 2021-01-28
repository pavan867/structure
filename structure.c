#include <stdio.h>
struct employee
{

    int id;
    char name[10];
    float salary;
    unsigned int phone_num;

};
int main()
{
    struct employee emp[20];
    int i;
    for(i=0;i<20;i++)
    {
        printf("Employee %d:- \n",i+1);
        printf("\n Enter id:");
        scanf("%d",&emp[i].id);
        printf("\n Enter name:");
        scanf("%s",&emp[i].name);
        printf("\n Enter salary:");
        scanf("%f",&emp[i].salary);
        printf("\n Enter phone_num:");
        scanf("%i",&emp[i].phone_num);
    }
    for(i=0;i<20;i++)
    {
        printf("\n id:");
        printf("%d",emp[i].id);
        printf("\n name:");
        printf("%s",emp[i].name);
        printf("\n salary:");
        printf("%f",emp[i].salary);
        printf("\n phone_num:");
        printf("%i",emp[i].phone_num);
        printf("\n");
    }




    return 0;







}
