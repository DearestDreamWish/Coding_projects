//libraries
#include<stdio.h>
#include<time.h>

//main code
int main(){
    //time library datatype to save time.
    time_t s;
    
    //Structure to save date and time.
    struct tm* current_time;
    
    //Set time to current time.
    s=time(NULL);

    //Custom time. Calculates the localtime.
    current_time=localtime(&s);

    //Output: current time.
    printf("%d:%d:%d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);

    //Exits program with zero failures.
    return 0;
}