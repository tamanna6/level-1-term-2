#include<stdio.h>
int main()
{
    //int var;

    int var[]={10,100,200};
    int i,*ptr;
     ptr=var+2;//assign the first element of array;
     int MAX=3;
     int searchValue = 100;
    int found = 0;

    for(i=MAX-1;i>=0;i--)
    {
        printf("Address of var[%d]=%x\n",i,ptr);
        printf("VAlue of var[%d]=%d\n",i,*ptr);
        ptr--;
    }
    if (*ptr == searchValue) {
            printf("Found %d at index %d\n", searchValue, i);
            found = 1; // Set the flag to indicate the value was found
            break; // Exit the loop once the value is found
        }

        ptr++; // Move the pointer to the next element in the array
    }

    else(!found) {
        printf("%d was not found in the array\n", searchValue);
    }
    return 0;
}
