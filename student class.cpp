#include<iostream>
using namespace std;
class Student
{
    public:

    int id;
    int age;
    string name;
    string address;
public:
    void display()
    {
       cout<<"Please enter id: ";
        cin>>id;
        cout<<"Please enter age: ";
        cin>>age;
        cout<<"Please enter name: ";
        cin>>name;
        cout<<"Please enter address: ";
        cin>>address;

    }
    void show()
    {

        cout<<id <<" "<<age<<" "<<name <<" "<<address<<endl;
    }
};
int main()
{
    Student obj;
    obj.display();
    obj.show();

    return 0;
}






