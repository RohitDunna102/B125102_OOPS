#include <stdio.h>

int main() {
    int a[100], n, sum = 0;
    int *p;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    p = a;

printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for(int i = 0; i < n; i++) {
        sum = sum + *(p + i);
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}