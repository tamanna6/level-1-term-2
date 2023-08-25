#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};
int main()
{
    struct Student s;
    s.roll=220201006;
    strcpy(s.name,"Tamanna");

    printf("%d ",s.roll);
    printf("%s ",s.name);
    return 0;
}
