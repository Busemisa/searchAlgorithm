#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    int i; // Deðiþken tanýmlamasýný döngünün dýþýnda yapýn.
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found, return the index.
        }
    }
    return -1; // Target not found in the array.
}

int main() {
    int size, target,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result == -1) {
        printf("Target %d was not found in the array.\n", target);
    } else {
        printf("Target %d was found at index %d.\n", target, result);
    }

    return 0;
}

