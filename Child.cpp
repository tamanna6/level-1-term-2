#include<iostream>
using namespace std;

class Child;
class Father {
private:
    string name;
    string address;
    int money;

public:
    Father(string n, string a, int m)
    {
        name=n;
        address=a;
        money=m;
    }


    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }

    int getMoney() {
        return money;
    }
    friend void mother(Child c, Father f);
};

class Child {
private:
    string name;
    string address;
    int money;

public:
    Child(string n, string a, int m)
    {
        name=n;
        address=a;
        money=m;
    }


    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }

    int getMoney() {
        return money;
    }

    friend void mother(Child c, Father f);
};

void mother(Child c, Father f) {
    cout << "Child's Name: " << c.getName() << endl;
    cout << "Child's Address: " << c.getAddress() << endl;
    cout << "Child's Money: " << c.getMoney() << endl;
    cout << "Father's Name: " << f.getName() << endl;
    cout << "Father's Address: " << f.getAddress() << endl;
    cout << "Father's Money: " << f.getMoney() << endl;


}

int main() {
    Father f("John Doe", "123 Main St", 1000);
    Child c("Jane Doe", "456 Elm St", 100);

    mother(c, f); // Calling the friend function to communicate between child and father

    return 0;
}

