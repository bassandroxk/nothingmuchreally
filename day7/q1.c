#include <stdio.h>

int main() {
    int year;
    
    printf("enter a year and i'll check if it's a leap year: ");
    scanf("%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
    
    return 0;
}
