#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    cout<<sizeof(p)<<endl;
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    delete[]p;
    return 0;
}
