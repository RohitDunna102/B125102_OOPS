#include <stdio.h>
int main() {
    int a[100],n,i,S,found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &S);

    for(i=0;i<n;i++) {
        if(a[i]==S) {
            printf("Element found at position %d\n", i + 1);
            found=1;
            break;
        }
    }

    if(found==0) {
        printf("Element not found\n");
    }

    return 0;
}