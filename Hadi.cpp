#include<iostream>
using namespace std;
class Student{
private:
    string name;
    int age;
    float gpa;
public:
    void setinfo()
    {
        name="Hadi";
        age=25;
        gpa=3.02;
    }
    void getinfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gpa<<endl;
    }
};
int main()
{
    Student obj;
    obj.setinfo();
    obj.getinfo();
    return 0;
}






