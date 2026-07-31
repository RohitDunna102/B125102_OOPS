#include <stdio.h>

int main() {
    int a[100], n, i, k;

    printf("No of elements in an array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n/2;i++) {
        k = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = k;
    }

    printf("FINAL ARRAY AFTER REVERSAL:\n");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }

    return 0;
}