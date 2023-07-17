#include <stdio.h>

int main() {
    int grade, totalGrades = 0, numGrades = 0; // Variables to store total and count of grades
    float average; // Variable to store the average grade

    char choice; // Variable to store user's choice

    do {
        printf("\nMenu:\n");
        printf("a. Enter a grade\n");
        printf("b. Calculate average grade\n");
        printf("c. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); // Read user's choice

        switch(choice) {
            case 'a':
                printf("Enter a grade (0-100): ");
                scanf("%d", &grade);

                if (grade >= 0 && grade <= 100) {
                    totalGrades += grade; // Add the entered grade to the total
                    numGrades++; // Increment the count of grades
                } else {
                    printf("Invalid grade! Grade must be between 0 and 100.\n");
                }

                break;

            case 'b':
                if (numGrades == 0) {
                    printf("No grades entered yet.\n");
                } else {
                    average = (float) totalGrades / numGrades; // Calculate the average
                    printf("Average grade: %.2f\n", average);
                }

                break;

            case 'c':
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 'c'); // Continue looping until the user chooses to exit

    return 0;
}
