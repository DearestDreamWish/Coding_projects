// Preprocessor directive.
#include <stdio.h>

// Main function.
int main() {
    // Initialization.
    int seconds = 0, minutes = 0, hours = 0, days = 0, weeks = 0;
    int calculation_for_minutes = 0, calculation_for_hours = 0;
    int calculation_for_days = 0, calculation_for_weeks = 0;
    int input_seconds = 0;

    // Input.
    printf("Give me the number of seconds. I will calculate it for you: ");
    scanf("%d", &input_seconds);

    // Calculations.
    calculation_for_minutes = input_seconds / 60;
    seconds = input_seconds % 60;
    calculation_for_hours = calculation_for_minutes / 60;
    minutes = calculation_for_hours % 60;
    calculation_for_days = calculation_for_hours / 24;
    hours = calculation_for_days % 24;
    calculation_for_weeks = calculation_for_days / 7;
    days = calculation_for_weeks % 7;
    weeks = calculation_for_weeks;

    // Output and display the calculations.
    printf("Seconds: %d\nMinutes: %d\nHours: %d\nDays: %d\nWeeks: %d\n", seconds, minutes, hours, days, weeks);

    return 0;
}
