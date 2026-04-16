// Question:
// Write a C program to insert an element at a particular position of an existing array.

#include <stdio.h>

int main() {
    int i, n, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = value;

    n++;

    printf("Final array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
