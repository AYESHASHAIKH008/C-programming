#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float percentage;
};

int main() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter percentage: ");
    scanf("%f", &s.percentage);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollno);
    printf("Percentage: %.2f%%\n", s.percentage);

    return 0;
}
