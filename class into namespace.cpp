#include<iostream>
using namespace std;
namespace scope1{
  class geek{
      public:
      void display();
  };
  void scope1::geek::display()
  {
      cout<<"Tamanna"<<endl;
  }
}
int main()
{
    scope1::geek obj;
    obj.display();
    return 0;

}




