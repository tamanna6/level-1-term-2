#include<iostream>
using namespace std;
bool search(int arr[],int n,int key,int updatevalue)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
           // printf("the index is %d",i);
             return arr[i]=updatevalue;
        // printf("the index is %d",i);
    }
   // printf("the index is %d");
    return 0;

}


int main()
{
    //int arr[5]={2,4,6,8,10};
    cout<<"The size of the array:";
    int n;
    cin>>n;
   // cout<<"Enter the elements of the array:";
   int arr[n];
   //cin>>arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

    cout<<"Enter an element to find: ";

    int key;
    cin>>key;
    int updatevalue=7;

    bool found=search(arr,n,key,updatevalue);
    if(found)
    {
        printf("The index is %d ");
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< arr[i ]<<endl ;
    }
  //  if(found){


    //}
    //for(int i=0;i<n;i++)
    //{
       // if(i==key)
       // {
           // arr[i]=updatevalue;

       // }
        //cout<<arr[i ];
   // }

    //{
       // printf("The element is present");
      // for(int i=0;i<n;i++)
       //{
          // arr[i]=updatevalue;
           //cout<<arr[i ];

      // }


       // for(int i=0;i<n;i++)
       // {
           // arr[key]==updatevalue;
        //}
   // }
   // else
   // {
       // printf("The element is not present");
   // }
   // arr[key]==updatevalue;
   // for(int i=0;i<n;i++)
    //{
    //    cout<<arr[i] ;
  //  }
    return 0;

}

