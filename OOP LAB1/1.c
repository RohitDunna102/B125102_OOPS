#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int largest, smallest;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];

        sum += arr[i];
    }

    average = sum / n;

    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    printf("Average = %.2f\n", average);

    return 0;
}