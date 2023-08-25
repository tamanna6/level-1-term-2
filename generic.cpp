#include <iostream>
using namespace std;

template <typename T>

T maximum(T a, T b){

    return a>b? a:b;
}


int main() {

cout<< maximum(10, 20)<<endl;
cout<< maximum(10.23, 534.02) <<endl;
cout<<maximum('a','b')<<endl;

    return 0;
}
