 #include<iostream>
using namespace std;
class Phone{
public:
    double price;
    string brand;
    Phone(string brand, double price=1000)
    {
        this->brand=brand;
        this->price=price;
    }
    ~Phone()
    {
        cout<<"Clear storage"<<endl;
    }
};
int main()
{
    Phone xiaomi("xiaomi");
    xiaomi.price=5000;
    cout<< xiaomi.brand<<endl;
    cout<< xiaomi.price<<endl;
    Phone r1("Samsung", 2000);
    cout<<r1.price<<" "<<r1.brand<<endl;
    return 0;
}

