#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
	
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is equal to the element at the middle.
        if (arr[mid] == target) {
            return mid; // Target found, return the index.
        }

        // If the target is greater, ignore the left half.
        if (arr[mid] < target) {
            left = mid + 1;
        }

        // If the target is smaller, ignore the right half.
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found in the array.
}

int main() {
    int size, target,i;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the sorted array elements:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        printf("Target %d was not found in the array.\n", target);
    } else {
        printf("Target %d was found at index %d.\n", target, result);
    }

    return 0;
}

