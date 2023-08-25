#include<stdio.h>

void BubbleSort(int arr[],int n)
{


    for(int i=0; i<n-1; i++)

    {

        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {

                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }


        }


    }
}
int main()
{

    //int arr[5]={8,4,6,1,2};
    int n;
    printf("Enter the size:");
    scanf("%d ",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,n);
    printf("After sorting:");

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
