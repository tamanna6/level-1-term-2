#include <iostream>
using namespace std;

int main() {

cout<< "start"<<endl;

try{
    cout<< "Inside try bolck"<<endl;
    throw 10;
    cout<< "This line will not execute"<<endl;
}catch (...){
    cout<< "Caught! "<<endl;
}
    return 0;
}
