#include<stdio.h>
//using namespace std;
bool search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
    }
    return 1;
}




int main()
{
    int arr[5]={2,4,6,8,10};

    int key;
    cin>>key;
    bool found=search(arr,5,key);
    if(found)
    {
        printf("The element is present");
    }
    else
    {
        printf("The element is not present");
    }
    return 0;

}
