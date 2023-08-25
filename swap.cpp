#include<bits/stdc++.h>
using namespace std;
void swapArray(int arr[],int n)
{
    //int temp=0;
    for(int i=0;i<n;i=i+2)

    {
        if(i+1<n)
        {
          // temp=arr[i];
        //arr[i]=arr[i+1];
        //arr[i+1]=temp;
        swap(arr[i],arr[i+1]);

        }


    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={10,20,30,40,50};

    swapArray(arr,6);
    swapArray(brr,5);
    printArray(arr,6);
    printArray(brr,5);
    return 0;


}
