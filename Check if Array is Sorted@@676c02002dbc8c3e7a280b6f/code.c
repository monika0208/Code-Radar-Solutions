#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: If the array has only one element, it's always sorted
    if (n == 1) {
        printf("Sorted\n");
        return 0;
    }

    int sorted = 1;  // Assume sorted, change if a violation is found

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {  // If out of order, mark as not sorted
            sorted = 0;
            break;  // No need to check further, exit loop
        }
    }

    if (sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
