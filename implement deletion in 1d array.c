#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    if (position >= 0 && position < *size) {
        for (int i = position; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    } else {
        printf("Invalid position\n");
    }
}

int main() {
    int arr[100], size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0 to %d) where you want to delete the element: ", size - 1);
    scanf("%d", &position);

    deleteElement(arr, &size, position);

    printf("Array after deletion: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
