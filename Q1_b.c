// Question:
// Write a C program to delete an element from a particular position of an existing array.

#include <stdio.h>

int main() {
    int i, n, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element: ");
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Final array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// OutPut

// Enter the number of elements: 5
// Enter the elements: 2 5 6 7 9
// Enter the position of the element: 2
// Final array after deletion: 2 6 7 9
