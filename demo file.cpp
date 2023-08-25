#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    ofstream file;
    file.open("Student.txt",ios::out|ios::app);
    string name;
    cout<<"Enter Your name: " ;
   // file<<"I am Tamanna.I am 21 years old.I am from Dinajpur\n.";
   getline(cin,name);
   file<<"Welcome"<<name<<endl;
    file.close();



    return 0;
}
