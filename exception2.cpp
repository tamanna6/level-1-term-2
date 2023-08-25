#include <iostream>
using namespace std;

void xTest(int test){
    cout<< "Inside XTest, test is " <<test<<endl;
    if(test)
    throw test;
}

int main() {

cout<< "start"<<endl;

try{
    cout<< "Inside try block"<<endl;
    xTest(0);
    xTest(1);
    xTest(2);

}catch (...){
  cout<< "Handled! "<<endl;
}
    return 0;
}
