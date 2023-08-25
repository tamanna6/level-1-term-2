#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int id;
    int age;
    void display(Student info[],int size){
        for(int i=0;i<size;i++)
        {
            cout<<"Students"<<i+1<<endl;
            cout<<"Name"<<info[i].name<<endl;
            cout<<"ID"<<info[i].id<<endl;
            cout<<"Age"<<info[i].age<<endl;
        }
    }











};
