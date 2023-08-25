#include <stdio.h>

int main()
{
    int var[] = {10, 100, 200};
    int i, *ptr;
    ptr = var;
    int MAX = 3;
    int searchValue = 100;
    int found = 0;

    for (i = 0; i < MAX; i++)
    {
        printf("Address of var[%d] = %p\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);

        if (*ptr == searchValue)
        {
            printf("Found %d at index %d\n", searchValue, i);
            found = 1;
            break;
        }

        ptr++;
    }

    if (!found)
    {
        printf("%d was not found in the array\n", searchValue);
    }

    return 0;
}

