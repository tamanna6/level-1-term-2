#include<iostream>
using namespace std;
class Phone{
private:
    double price;
    string brand;
public:
    Phone(double price=1000,string brand)
    {
        this->brand=brand;
    }
    ~Phone()
    {
        cout<<"Clear storage"<<endl;
    }
};
int main()
{
    Phone xiaomi("xiaomi");
    cout<<xiaomi.price<<endl;
    cout<<xiaomi.brand<<endl;
    Phone r1(2000.12,"Samsung");
    cout<<r1.price<<" "<<r1.brand<<endl;
    return 0;
}








