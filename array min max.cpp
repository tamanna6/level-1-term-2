#include<iostream>
using namespace std;
//void  update(int arr[],int n)
//{
    //cout<<"Inside the function"<<endl;
   // arr[0]=120;
     //for(int i=0;i<3;i++)
    //{
        //cout<<arr[i]<<" ";
    //}
    //cout<<"Back to the main function"<<endl;
    //return 1000;


//}
//int getMax(int m[],int n)

//{
    //int x=0;
   // for(int i=0;i<n;i++)
   // {
        //x=max(x,m[i]);

    //if(m[i]>max)
       // {
           //max=m[i];
        //}

    //}
   // return x;

//}

//int getMin(int m[],int n)
//{
    //int y=99999999;
    //for(int i=0;i<n;i++)
    //{
        //y=min(y,m[i]);
        //if(m[i]<min)
        //{
           //min=m[i];
        //}

    //}
    //return y;

//}
int main()
{
    //int size;
    //cin>>size;
    int arr[5]={2,7,1,-4,11};
    //arr[0]=120;
    int sum=0;
    for(int i=0;i<5;i++)
    {

        sum=sum+arr[i];
        //cout<<arr[i]<<endl;
    }
    //update(arr,3);
    cout<<sum<<endl;

    return 0;
}

