#include <stdio.h>

int main() {
    int num1, num2, sum; // Declare variables to store two numbers and their sum

    // Prompt the user to enter two numbers
    printf("Enter two integers: ");

    // Read the input from the user and store them in num1 and num2
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers using the '+' operator
    sum = num1 + num2;

    // Print the final result
    printf("Sum: %d\n", sum);

    return 0; // Indicate that the program ended successfully
}
