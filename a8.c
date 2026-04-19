#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i, pass = 1;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);

        if(marks[i] < 40) {
            pass = 0;
        }

        total += marks[i];
    }

    percentage = total / 5;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if(pass) {
        printf("Result: PASS\n");

        if(percentage >= 75) {
            printf("Grade: Distinction\n");
        } 
        else if(percentage >= 60) {
            printf("Grade: First Division\n");
        } 
        else if(percentage >= 50) {
            printf("Grade: Second Division\n");
        } 
        else {
            printf("Grade: Third Division\n");
        }
    } 
    else {
        printf("Result: FAIL\n");
        printf("Grade: Not Applicable\n");
    }

    return 0;
}