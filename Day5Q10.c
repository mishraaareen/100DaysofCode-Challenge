//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int t_seconds, hours, minutes, seconds;

    
    printf("Enter time in seconds: ");
    scanf("%d", &t_seconds);

   
    hours = t_seconds / 3600;
    minutes = (t_seconds % 3600) / 60;
    seconds = t_seconds % 60;

    
    printf("Time = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
