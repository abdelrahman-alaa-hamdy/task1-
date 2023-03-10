#include <stdio.h>

int main() {
    int arr[100], unique[100];
    int i, j, size, count;

    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    count = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            unique[count] = arr[i];
            count++;
        }
    }

    printf("\nUnique elements: ");
    for (i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
