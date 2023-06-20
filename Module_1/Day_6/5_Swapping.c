#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
};

int main() {
    // Create two instances of the structure
    struct Student student1, student2;

    // Input the values for student1
    printf("Enter the name of Student 1: ");
    scanf("%s", student1.name);
    printf("Enter the age of Student 1: ");
    scanf("%d", &student1.age);

    // Input the values for student2
    printf("Enter the name of Student 2: ");
    scanf("%s", student2.name);
    printf("Enter the age of Student 2: ");
    scanf("%d", &student2.age);

    printf("\nBefore swapping:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);

    // Temporary variables for swapping
    char temp_name[50];
    int temp_age;

    // Swap the name field
    strcpy(temp_name, student1.name);
    strcpy(student1.name, student2.name);
    strcpy(student2.name, temp_name);

    // Swap the age field
    temp_age = student1.age;
    student1.age = student2.age;
    student2.age = temp_age;

    printf("\nAfter swapping:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);

    return 0;
}
