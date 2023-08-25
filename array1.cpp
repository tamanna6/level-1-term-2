#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int A[n];//=//{2,4,6,8,10,12,14};

    //int A[]={2,4,6,8,10,12,14};
    //int A[5];
    //A[0]=12;
    //A[1]=15;
    //A[2]=25;
    for(int x:A)
    {
        cout<<x<<endl;
    }

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    cout<<A[2]<<endl;
    return 0;
}
