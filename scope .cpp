#include<iostream>
using namespace std;
class Myclass{
public:
    void myMemberFunction();//Member Function
};
    void Myclass::myMemberFunction()
    {
        cout<<"Define Function by ::operator"<<endl;
    }

int main()
{
    Myclass obj;
    obj.myMemberFunction();//call the member function
    return 0;
}







