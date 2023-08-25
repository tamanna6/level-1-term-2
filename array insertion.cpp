#include<iostream>
using namespace std;

int main()
{
    int arr[]= {2,4,6,8,10};
    int n=sizeof(arr)/sizeof(int);


    //int j=n-1;
    //n=n+1;
    cout<< "Original array after insertion: "<<endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;

    int value,position;
    cout<<"Enter the value and position"<<endl;
    cin>>value>>position;
    int j=n-1;
    n=n+1;
    while(j>=position)
    {
        arr[j+1]=arr[j];
        j--;
        //break;

    }
    //break;

    arr[position]=value;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
