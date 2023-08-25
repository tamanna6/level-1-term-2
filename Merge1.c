#include<stdio.h>




void mergeSort(int arr[], int l, int r) {
  if (l < r) {


    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);


    merge(arr, l, m, r);
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



    return 0;

