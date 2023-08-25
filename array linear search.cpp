#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;

        }

    }
    return 0;
}





int main()
{
    int arr[5]={1,2,7,9,11};
    cout<<"The element search in the array"  <<endl;
    int key;
    cin>>key;
   bool found= linearSearch( arr,5,key);
   if (found)
   {
       cout<<"The element is present"<<endl;
   }
   else
   {
       cout<<"The element is absent"<<endl;
   }
    return 0;

}
