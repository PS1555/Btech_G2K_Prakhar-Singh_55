#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0;
    float avg;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // adding elements
    }

    // Calculate average
    avg = (float)sum / n;

    // Output
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}