#include<iostream>
using namespace std;
namespace scope1
{
  class A{
  public:
    int a,b;
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void showNum()
    {


    cout<<"inside first scope"<<endl;
    cout<<a<<" "<<b<<endl;
  }
  };
  namespace scope2
  {
      class A{
      public:
        int a,b;
        A(int x,int y)
        {

            a=x;
            b=y;
            void showNum()
            {

                cout<<"inside first scope"<<endl;
                cout<<a<<" "<<b<<endl;
            }
        };
      }

      int main()
      {
        scope1::class obj1;
        scope2:class obj2;
              class A obj3;


          A obj(5,5);
          obj.showNum();
          return 0;
      }


















