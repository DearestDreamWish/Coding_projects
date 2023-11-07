//Libraries.
#include<stdio.h>
#include<time.h>

int main()
{
    // datatype for calender.
    time_t t;

    //Calculates time.
    time(&t);

    //Displays date and time. Output.
    printf("Current date: %s", ctime(&t));

    //Clean exit.
    return 0;
}