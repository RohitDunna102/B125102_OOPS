#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i, highest = 0;
    struct Student *ptr;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if(ptr == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &ptr[i].rollNo);

        printf("Name: ");
        scanf("%s", ptr[i].name);

        printf("Marks: ");
        scanf("%f", &ptr[i].marks);

        if(ptr[i].marks > ptr[highest].marks)
            highest = i;
    }

    printf("\nStudent with Highest Marks\n");
    printf("Roll Number: %d\n", ptr[highest].rollNo);
    printf("Name: %s\n", ptr[highest].name);
    printf("Marks: %.2f\n", ptr[highest].marks);

    free(ptr);

    return 0;
}