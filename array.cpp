#include<iostream>
using namespace std;
void printArray(char m[],int size)

{
    for(int i=0;i<size;i++)
    {

        cout<<m[i]<<endl;
    }

}
int main()
{
    int arr[5]={2,7};

    int size=sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    char Tamanna[5]={'a','b','c','d','e'};
    cout<<Tamanna[3]<<endl;
    printArray(Tamanna,5);





    return 0;
}
