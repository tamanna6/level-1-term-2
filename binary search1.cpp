#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,9,5,8,12,20,33,25};
    int n=sizeof(arr)/sizeof(int);
    int value;
    cout<<"Enter an element for search:"<<endl;
    cin>>value;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==value)
        {
            cout<<"Found the value at "<< mid<<endl;

        break;
        }

        else if (arr[mid]<value)
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}
