#include <stdio.h>

int main() {
    int i, j, k, n, temp, a[20];

    printf("Enter the size of the array (max 20): ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Invalid size! Please enter a size between 1 and 20.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int swapped;
    for (j = 0; j < n - 1; j++) {
        swapped = 0; // Flag to check if any swapping is done
        for (k = 0; k < n - 1 - j; k++) {
            if (a[k] > a[k + 1]) { // Change the comparison operator
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
                swapped = 1; // Set flag to true if a swap occurs
            }
        }
        if (!swapped) {
            // If no swap occurs in a pass, array is already sorted
            break;
        }
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
