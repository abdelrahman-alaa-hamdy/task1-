#include <stdio.h>

void count_frequency(int arr[], int size) {
    int count[size];
    int i, j, frequency;

    
    for (i = 0; i < size; i++) {
        count[i] = 0;
    }

    
    for (i = 0; i < size; i++) {
        frequency = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                frequency++;
                count[j] = -1;  
            }
        }
        if (count[i] != -1) {
            count[i] = frequency;
        }
    }

    
    printf("\nFrequency of each element:\n");
    for (i = 0; i < size; i++) {
        if (count[i] != -1) {
            printf("%d occurs %d times\n", arr[i], count[i]);
        }
    }
}

int main() {
    int arr[100], size, i;

    
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    count_frequency(arr, size);

    return 0;
}
