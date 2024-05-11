#include <stdio.h>

#define MAX_SIZE 100

// Function to add element to the beginning of the array
void addElementToArray(int arr[], int *size, int element) {
    if (*size >= MAX_SIZE) {
        printf("Array is full, cannot add more elements.\n");
        return;
    }

    // Shift elements to the right
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Add element to the beginning
    arr[0] = element;
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    // Add a new element to the beginning
    addElementToArray(arr, &size, 0);

    // Print the array
    printf("Array after adding element at the beginning: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
