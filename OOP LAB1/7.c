#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, highest = 0;
    float sum = 0, average;

    // Input details
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;

        if(s[i].marks > s[highest].marks)
            highest = i;
    }

    average = sum / 5;

    printf("\nStudent with Highest Marks\n");
    printf("Roll No : %d\n", s[highest].rollNo);
    printf("Name    : %s\n", s[highest].name);
    printf("Marks   : %.2f\n", s[highest].marks);

    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}