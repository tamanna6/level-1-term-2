#include<iostream>
using namespace std;
class Friends{
public:
    string name;
    double cgpa;
    int age;
    int no_of_bf;
public:
    void showdetails()
    {

        cout<<name<<endl;
        cout<<cgpa<<endl;
        cout<<age<<endl;
        cout<<no_of_bf<<endl;
    }
};
    int main()
    {
        int n;
        cout<<"Enter number of friends:"<<endl;
        cin>>n;
        Friend arr[n];
        for(int i=0;i<n;i++)
        {
            cout<<"Enter"<< (i+1)<< "st"<<"friend info:"<<endl;
            cout<<"Name:";
            cin>>arr[i].name;
            cout<<"age:";
            cin>>arr[i].age;
            cout<<"Cgpa:";
            cin>>arr[i].cgpa;
            cout<<"Number of boyfriends:";
            cin>>arr[i].no_of_bf;

        }
        for(int i=0;i<n;i++)
        {
            arr[i].showdetails();
        }
        return 0;
    }















