#include <stdio.h>

int binarySearch(int arr[], int left, int right, int searchValue) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == searchValue) {
            return mid;
        }

        if (arr[mid] < searchValue) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int var[] = {10, 100, 200};
    int MAX = 3;
    int searchValue = 100;

    int index = binarySearch(var, 0, MAX - 1, searchValue);

    if (index != -1) {
        printf("%d found at index %d.\n", searchValue, index);
    } else {
        printf("%d was not found in the array.\n", searchValue);
    }

    return 0;
}

