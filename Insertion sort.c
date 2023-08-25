#include<stdio.h>
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=arr[i];
        while(j>=0 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
int main()
{
    int arr[5]={9,4,1,2,5};
    insertionSort(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
