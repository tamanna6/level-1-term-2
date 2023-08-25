#include<iostream>
using namespace std;
bool search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
       if(arr[i]==key)
       {
           return 1;
       }
      // else
      // {
          // return 0;
       //}
    }
    return 0;
}


int main()
{
    int arr[5]={1,2,7,9,11};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the element to search in the array"<<endl;
    int key;
    cin>>key;

    bool found=search(arr,5,key);
    if(found)
    {
        cout<<"The element is present in array"<<endl;
    }
    else
    {
        cout<<"The element is absent"<<endl;
    }

    return 0;

}

