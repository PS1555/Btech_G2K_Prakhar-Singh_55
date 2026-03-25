#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is max
    max = arr[0];

    // Find maximum
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Output
    printf("Maximum element = %d\n", max);

    return 0;
}
