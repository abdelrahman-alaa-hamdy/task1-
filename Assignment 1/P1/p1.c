#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count = 0;

    printf("the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency count to -1
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark the element as visited
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // store frequency count
        }
    }

    printf("Duplicate elements in the array: ");
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nTotal number of duplicate elements in the array: %d", count);

    return 0;
}
