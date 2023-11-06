/*
Kadel Saleh.
Cyber and Computer Technology.
ksaleh22@student.aau.dk

This program is a simple calculator. Inspired by chatgpt: chat.openai.com
This program follows the top-down programming method by first presenting the main functionality in main(),
followed by helper functions that break the program down into smaller, manageable parts.
The comments are now more detailed, making it easy to follow the program's logic.
Pointer variables and pointer arguments are used.
The program is written in a modular style, where different functionalities are encapsulated in separate functions. This makes the code easier to maintain, understand, and extend.
*/

// Library header inclusions.
#include <stdio.h>  // For printf and scanf.
#include <math.h>   // Enables mathematical expressions.
#include <stdbool.h>  // Allows the use of bool.

// Function prototypes - a preview of our functions.
// It informs the compiler about our functions before they are actually defined.
// The function checks if the given operator is binary.
bool is_binary_operator(char op);
// The function retrieves an operator and operand from the user.
void scan_data(char *op, double *operand);
// The function performs the desired operation on the accumulator.
void do_next_op(char op, double operand, double *accumulator);
// The function controls the entire interactive session of the calculator.
double run_calculator();

// Main program
int main() {
    // Run the calculator and store the final result.
    double final_result = run_calculator();  // Procedure call.
    // Print the final result.
    printf("Final result is: %.6lf\n", final_result);
    return 0;
}

// Checks whether it's a binary operator, if so, return true or false.
// Checks if a given operator is binary. Short-circuit operator.
bool is_binary_operator(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/' || op == '^';
}

// Takes input from the user for an operator and, if necessary, an operand. Procedure with 2 parameters.
void scan_data(char *op, double *operand) {
    printf("Enter operator: ");
    // " %c" ensures that leading whitespace is removed before reading the char.
    // Scans a char input.
    scanf(" %c", op);

    // If the operator is binary, ask for an operand.
    if (is_binary_operator(*op)) {
        printf("Enter operand: ");
        // Scan for an operand.
        scanf("%lf", operand);
    } else {
        // For unary operators, set the operand to 0.
        *operand = 0.0;
    }
}

/*
Performs the specific operation based on the entered operator and operand:
Binary operations (+, -, *, /, ^)
Unary operations (#, %, !)
For illegal operations (like taking the square root of a negative number or dividing by 0), the accumulator remains unchanged.
Pointer variables "accumulator" are used, so it changes throughout the code using dereference.
*/
// Performs the specified operation on the accumulator. Expressions are impure because the accumulator is changed.
// It uses a switch, which is a conditional expression. All outcomes in this switch result in an L-expression with different infix operators for binary operators.
// Switch is a selective control structure, i.e., multi-way selection with jump commands such as break.
// With the pointer variable, the value can change globally. It's because of the dereference operator, also known as the indirection operator, that the program can calculate. Procedure with 3 parameters.
// Call by reference parameters. You can consider the pointer variable as a multiple return in this switch.
void do_next_op(char op, double operand, double *accumulator) {
    switch (op) {
        // Add the operand to the accumulator.
        case '+':
            *accumulator += operand;  // Expression operator.
            break;
        // Subtract the operand from the accumulator.
        case '-':
            *accumulator -= operand;
            break;
        // Multiply the accumulator by the operand.
        case '*':
            *accumulator *= operand;
            break;
        // Divide the accumulator by the operand if the operand is not 0.
        case '/':
            if (operand != 0.0) {
                *accumulator /= operand;
            }
            break;
        // Raise the accumulator to the power of the operand.
        case '^':
            *accumulator = pow(*accumulator, operand);
            break;
        // Take the square root of the accumulator if it is non-negative.
        case '#':
            if (*accumulator >= 0.0) {
                *accumulator = sqrt(*accumulator);
            }
            break;
        // Change the sign of the accumulator.
        case '%':
            *accumulator = -*accumulator;
            break;
        // Invert the accumulator if it is not 0.
        case '!':
            if (*accumulator != 0.0) {
                *accumulator = 1 / (*accumulator);
            }
            break;
        default:
            break;
    }
}

/*
The main part of the calculator. This function controls the entire user interaction:
Starts with an accumulator value of 0.0.
Uses a loop to repeatedly request input from the user (via scan_data), perform the desired operation (via do_next_op), and print the current value of the accumulator.
When the user enters 'q', the program breaks out of the loop, and the function returns the final accumulator value.
*/
// Runs the main loop of the calculator, where the user can perform operations.
double run_calculator() {
    // Initialize the accumulator to 0.
    // Local variable declarations and initialization.
    double accumulator = 0.0;
    char op;
    double operand;

    // An infinite loop until the user decides to quit (with 'q').
    // Iterative control structure.
    while (true) {
        // Get user input. Procedure call.
        scan_data(&op, &operand);  // Address operator is used to change variables. Call by reference parameters.

        // If the user enters 'q', we exit.
        // Selective control structure.
        if (op == 'q') {
            break;
        }

        // Perform the desired operation on the accumulator. Procedure call.
        do_next_op(op, operand, &accumulator);  // Address operator is used to change the variable.
        // Print the current value of the accumulator.
        printf("Result so far is %.6lf.\n", accumulator);  // Formatting string with a width of 0,6 in the scan field.
    }

    // Return the final value of the accumulator.
    return accumulator;
}
