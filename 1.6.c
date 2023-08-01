#include<stdio.h>

int main() {
    char studentName[50];
    int birthYear;
    int currentYear;
    int age;

    printf("Enter the student's name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = '\0';  // Removing newline character

    printf("Enter the student's birth year: ");
    scanf("%d", &birthYear);

    currentYear = 2023;
    age = currentYear - birthYear;

    printf("Student: %s\n", studentName);
    printf("Age: %d\n", age);

    return 0;
}
