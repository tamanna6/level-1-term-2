#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    char Name[20];
    char Id[15];
    int age;
    public:
        Student(char *Name,char *Id,int age)
        {
            strcpy(this-> Name,Name);
            strcpy(this->Id,Id);

            this->age=age;
        }

        void showstudentinfo()
        {
            cout<<"Name:"<<Name<<endl;
            cout<<"Id:"<<Id<<endl;
            cout<<"Age:"<<age<<endl;
        }
};
int  main()
{
    Student obj("Tamanna","220201006",20);
    obj.showstudentinfo();
    return 0;

}













