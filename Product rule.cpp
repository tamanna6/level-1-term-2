#include<iostream>
using namespace std;
int main()
{
    int i1,i2,im,n1,n2,nm,k;

    cin>>n1;
    cin>>n2;
    cin>>nm;
    k=0;

    for(i1=1;i1<=n1;i1++)
    {
        for(i2=1;i2<=n2;i2++)
        {
            for(im=1;im<=nm;im++)
            {
                k=k+1;
                cout<<k<<endl;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
