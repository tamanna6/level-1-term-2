#include<stdio.h>
int binarysearch(int arr[],int n,int key,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            low=mid+1;

        else
            high=mid-1;
    }
    return -1;
}

int main()
{
     printf("The size of the array:");
    int n;
    scanf("%d",&n);
   // cout<<"Enter the elements of the array:";
   int arr[n];
   //cin>>arr[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }

    printf("Enter an element to find: ");

    int key;
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int result=binarysearch(arr,n,key,low,high);
    if(result==-1)
        printf("Not found");
    else
        printf("Element is found at index %d",result);
    return 0;
}
